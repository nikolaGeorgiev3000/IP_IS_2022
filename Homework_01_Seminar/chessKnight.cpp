#include <iostream>

const int MAX_LENGTH_MOVES = 256;

// two "types" of moves -> vertically and horizontally
void moveXAxis(char *updatedPos, int units)
{
    *updatedPos += units; // if units are negative, it is the same as +(-units)
}

void moveYAxis(char *updatedPos, int units)
{
    *(updatedPos + 1) += units; // the Y-axis indicates the digit [1 - 8], which is the second element of the str
}

int strLength(char *str)
{
    int result = 0;
    while (*str != '\0')
    {
        ++result;
        ++str; // next element of the str, address aritmetics
    }
    return result;
}

bool isOutsideChessBoard(char *updatedPos)
{
    return (*updatedPos < 'a') || (*updatedPos > 'h') || (*(updatedPos + 1) < '1') || (*(updatedPos + 1) > '8'); // DeMorgan's law: !(p && q) === !p || !q ; !(>=) === < and !(<=) === >
}

void moveKnight(char *startPos, char *moves)
{
    char lastValidPos[2]; // the last valid position of the knight is being saved here
    *lastValidPos = *startPos;
    *(lastValidPos + 1) = *(startPos + 1);

    char updatedPos[2]; // the updated position after each move is being saved here
    *updatedPos = *startPos;
    *(updatedPos + 1) = *(startPos + 1);

    for (int i = 0; i < strLength(moves); ++i)
    {
        // switching with each individual move in order to update the position
        switch (*(moves + i))
        {
        case 'r':
            if (i % 2 == 0) // the first part of a pair-move moves the knight by 2 units
            {
                moveXAxis(updatedPos, 2); // right and left move the X-Axis element
            }
            else // the second part of a pair-move -> the knight moves by 1 unit
            {
                moveXAxis(updatedPos, 1);
            }
            break;
        case 'l':
            if (i % 2 == 0)
            {
                moveXAxis(updatedPos, -2); // we use negative units because the knight is moving left
            }
            else
            {
                moveXAxis(updatedPos, -1);
            }
            break;
        case 'u':
            if (i % 2 == 0)
            {
                moveYAxis(updatedPos, 2); // up and down movement on the Y-Axis
            }
            else
            {
                moveYAxis(updatedPos, 1);
            }
            break;
        case 'd':
            if (i % 2 == 0)
            {
                moveYAxis(updatedPos, -2); // same 'negative' logic as the 'left' move
            }
            else
            {
                moveYAxis(updatedPos, -1);
            }
            break;
        default:
            std::cout << "Please, enter valid moves only.\n";
            return;
        }

        if (isOutsideChessBoard(updatedPos))
        {
            std::cout << "Not all moves are valid. The knight cannot move " << *(moves + i) << *(moves + 1 + i) << ". The final position of the knight is " << *lastValidPos << *(lastValidPos + 1) << ".";
            return; // exits the function
        }

        if (i % 2 != 0) // a pair-move is over and we have to update the lastValidPos
        {
            *lastValidPos = *updatedPos;
            *(lastValidPos + 1) = *(updatedPos + 1);
        }
    }
    // we are not outside the chessBoard here, so we print out the lastValidPos of the knight
    std::cout << "All moves are valid. The final position of the knight is " << *lastValidPos << *(lastValidPos + 1) << ".";
}

int main()
{
    // init the strArrays needed
    char startPos[2]; // two elements needed for the knight's starting position
    char *knightMoves = new char[MAX_LENGTH_MOVES + 1];

    std::cout << "Knight starting position: ";
    std::cin.getline(startPos, 3); // we use length 3 because of the '\0'

    std::cout << "Moves: ";
    std::cin.getline(knightMoves, MAX_LENGTH_MOVES + 1);

    std::cout << std::endl;

    moveKnight(startPos, knightMoves);

    // delete moves
    delete[] knightMoves;
    knightMoves = NULL;

    return 0;
}
