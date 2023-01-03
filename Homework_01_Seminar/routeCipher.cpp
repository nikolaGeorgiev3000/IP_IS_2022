#include <iostream>
#include <iomanip>

const int MAX_LENGTH_MESSAGE = 256; // including the terminating zero
// Comments about the solution:
/*
    Encryption (initial thought process):
        The user inputs a char *str text with std::cin.getline(str, 256), as well as a encrKey-number 'encrKey'.
    The encrKey-number refers to the number of columns of the matrix we will fill with the str the user has entered.
    The remaining spots of the currentRow, where the *str == '\0', we fill with capital 'X'. After that, depending
    on whether encrKey is positive or negative. Then we create an 'encryptedStr', which we fill according to the value of encrKey.
    If encrKey > 0, then we fill the 'encryptedStr', going spiral counter-clocencrKeywise on the matrix, starting from upper left.
    If encrKey < 0, then we fill the 'encryptedStr', going spiral counter-clocencrKeywise on the matrix, starting from lower right.
*/

int strCleanMsgLength(char *str)
{
    int result = 0;
    while (*str != '\0')
    {
        if ((*str >= '0' && *str <= '9') || (*str >= 'A' && *str <= 'Z') || (*str >= 'a' && *str <= 'z'))
            ++result;
        ++str; // address arithmetics
    }
    return result;
}

int absValue(int encrKey)
{
    return (encrKey > 0) ? encrKey : -encrKey;
}

void cleanseMessage(char *source, char *&destination)
{
    if (destination != nullptr) // if destination is not empty, we 'clean' it up
    {
        delete[] destination;
    }

    int destinationLength = strCleanMsgLength(source) + 1;
    destination = new char[destinationLength];

    int i = 0;
    while (*source != '\0')
    {
        if ((*source >= 'a' && *source <= 'z'))
        {
            *(destination + i) = *source - (int)('a' - 'A'); // this operation capitalises the small letters
            ++i;                                             // the index grows only after we found a letter or a digit
        }
        else if ((*source >= '0' && *source <= '9') || (*source >= 'A' && *source <= 'Z'))
        {
            *(destination + i) = *source;
            ++i; // the index grows only after we found a letter or a digit
        }
        ++source;
    }

    destination[destinationLength - 1] = '\0';
}

void matrixFill(char *message, char **encrMatrix, int rows, int encrKey)
{
    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < encrKey; ++j)
        {
            if ((i == (rows - 1)) && (*message == '\0')) // if we are on the last row AND the cleanMessage is over
            {
                encrMatrix[i][j] = 'X';
            }
            else
            {
                encrMatrix[i][j] = *(message);
                ++message;
            }
        }
    }
}

void matrixOutput(char **matrix, int rows, int cols)
{
    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < cols; ++j)
        {
            std::cout << std::setw(5) << matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

void encrFromUpperLeft(char **matrix, char *&destination, int rows, int cols)
{
    if (destination != nullptr)
    {
        delete[] destination;
    }

    int destinationLength = (rows * cols) + 1;
    destination = new char[destinationLength];
    int destinationIndex = 0; // the index for the destinationStr

    int startRow = 0, endRow = rows - 1;
    int startCol = 0, endCol = cols - 1;
    while (startRow <= endRow && startCol <= endCol)
    {
        // Print the first col
        for (int i = startRow; i <= endRow; ++i)
        {
            *(destination + destinationIndex) = matrix[i][startCol];
            ++destinationIndex;
        }
        startCol++;

        // Print the last row
        for (int i = startCol; i <= endCol; i++)
        {
            *(destination + destinationIndex) = matrix[endRow][i];
            ++destinationIndex;
        }
        endRow--;

        // Print the last col, if it exists
        if (endCol >= startCol)
        {
            for (int i = endRow; i >= startRow; --i)
            {
                *(destination + destinationIndex) = matrix[i][endCol];
                ++destinationIndex;
            }
            endCol--;
        }

        // Print the first row, if it exists
        if (endRow >= startRow)
        {
            for (int i = endCol; i >= startCol; --i)
            {
                *(destination + destinationIndex) = matrix[startRow][i];
                ++destinationIndex;
            }
            startRow++;
        }
    }

    destination[destinationLength - 1] = '\0';
}

void encrFromLowerRight(char **matrix, char *&destination, int rows, int cols)
{
    if (destination != nullptr)
    {
        delete[] destination;
    }

    int destinationLength = (rows * cols) + 1;
    destination = new char[destinationLength];
    int destinationIndex = 0; // the index for the destinationStr

    int startRow = 0, endRow = rows - 1;
    int startCol = 0, endCol = cols - 1;
    while (startRow <= endRow && startCol <= endCol)
    {
        // Print the last col
        for (int i = endRow; i >= startRow; --i)
        {
            *(destination + destinationIndex) = matrix[i][endCol];
            ++destinationIndex;
        }
        endCol--;

        // Print the first row
        for (int i = endCol; i >= startCol; --i)
        {
            *(destination + destinationIndex) = matrix[startRow][i];
            ++destinationIndex;
        }
        startRow++;

        // Print the first col, if it exists
        if (endCol >= startCol)
        {
            for (int i = startRow; i <= endRow; ++i)
            {
                *(destination + destinationIndex) = matrix[i][startCol];
                ++destinationIndex;
            }
            startCol++;
        }

        // Print the last row, if it exists
        if (endRow >= startRow)
        {
            for (int i = startCol; i <= endCol; ++i)
            {
                *(destination + destinationIndex) = matrix[endRow][i];
                ++destinationIndex;
            }
            endRow--;
        }
    }

    destination[destinationLength - 1] = '\0';
}

void decrFromUpperLeft(char *encrText, char **matrix, int rows, int cols)
{
    int encrTextIndex = 0;
    int startRow = 0, endRow = rows - 1;
    int startCol = 0, endCol = cols - 1;
    while (startRow <= endRow && startCol <= endCol)
    {
        // Print the first col
        for (int i = startRow; i <= endRow; ++i)
        {
            matrix[i][startCol] = *(encrText + encrTextIndex);
            ++encrTextIndex;
        }
        startCol++;

        // Print the last row
        for (int i = startCol; i <= endCol; i++)
        {
            matrix[endRow][i] = *(encrText + encrTextIndex);
            ++encrTextIndex;
        }
        endRow--;

        // Print the last col, if it exists
        if (endCol >= startCol)
        {
            for (int i = endRow; i >= startRow; --i)
            {
                matrix[i][endCol] = *(encrText + encrTextIndex);
                ++encrTextIndex;
            }
            endCol--;
        }

        // Print the first row, if it exists
        if (endRow >= startRow)
        {
            for (int i = endCol; i >= startCol; --i)
            {
                matrix[startRow][i] = *(encrText + encrTextIndex);
                ++encrTextIndex;
            }
            startRow++;
        }
    }
}

void decrFromLowerRight(char *encrText, char **matrix, int rows, int cols)
{
    int encrTextIndex = 0;
    int startRow = 0, endRow = rows - 1;
    int startCol = 0, endCol = cols - 1;
    while (startRow <= endRow && startCol <= endCol)
    {
        // Print the last col
        for (int i = endRow; i >= startRow; --i)
        {
            matrix[i][endCol] = *(encrText + encrTextIndex);
            ++encrTextIndex;
        }
        endCol--;

        // Print the first row
        for (int i = endCol; i >= startCol; --i)
        {
            matrix[startRow][i] = *(encrText + encrTextIndex);
            ++encrTextIndex;
        }
        startRow++;

        // Print the first col, if it exists
        if (endCol >= startCol)
        {
            for (int i = startRow; i <= endRow; ++i)
            {
                matrix[i][startCol] = *(encrText + encrTextIndex);
                ++encrTextIndex;
            }
            startCol++;
        }

        // Print the last row, if it exists
        if (endRow >= startRow)
        {
            for (int i = startCol; i <= endCol; ++i)
            {
                matrix[endRow][i] = *(encrText + encrTextIndex);
                ++encrTextIndex;
            }
            endRow--;
        }
    }
}

int main()
{
    // ENCRYPTION

    // Starting variables
    char initialMessage[MAX_LENGTH_MESSAGE];
    int encrKey;

    // Input
    std::cout << "ENCRYPTION\n\n";
    std::cout << "Enter an instruction message: ";
    std::cin.getline(initialMessage, MAX_LENGTH_MESSAGE);
    std::cout << "Enter an encryption key [k != 0]: ";
    std::cin >> encrKey;

    std::cout << std::endl;

    if (encrKey == 0)
    {
        std::cout << "The key must be != 0. ";
        return 0;
    }

    // Clean msg
    char *cleanMessage = nullptr;
    cleanseMessage(initialMessage, cleanMessage); // the cleanMessage is now ready to be put into a matrix
    int cleanMessageLength = strCleanMsgLength(initialMessage);

    int encrKeyAbs = absValue(encrKey);

    // init the matrix with new
    int encrMatrixRows = (cleanMessageLength % encrKeyAbs == 0) ? (cleanMessageLength / encrKeyAbs) : ((cleanMessageLength / encrKeyAbs) + 1); // the necessary rows needed for filling the matrix with our msg
    char **encrMatrix = new char *[encrMatrixRows];
    for (int i = 0; i < encrMatrixRows; ++i)
    {
        *(encrMatrix + i) = new char[encrKeyAbs];
    }

    matrixFill(cleanMessage, encrMatrix, encrMatrixRows, encrKeyAbs);
    std::cout << "\nThe matrix with the message is: \n";
    matrixOutput(encrMatrix, encrMatrixRows, encrKeyAbs);

    // create an encrypted string
    int encrStrLength = (encrMatrixRows * encrKeyAbs);
    char *encryptedStr = nullptr;

    // Go spirally around the cleanMsgMatrix, depending on the positivity of encrKey, and fill the encryptedStr
    if (encrKey > 0)
    {
        encrFromUpperLeft(encrMatrix, encryptedStr, encrMatrixRows, encrKeyAbs);
    }
    else
    {
        encrFromLowerRight(encrMatrix, encryptedStr, encrMatrixRows, encrKeyAbs);
    }

    std::cout << std::endl;
    std::cout << "The encrypted message, according to the sign of your key, is: \n";
    // print the encryptedMsg
    for (int i = 0; i < encrStrLength; ++i)
    {
        std::cout << *(encryptedStr + i) << " ";
    }

    // delete matrix
    for (int i = 0; i < encrMatrixRows; ++i)
    {
        delete[] encrMatrix[i];
    }
    delete[] encrMatrix;

    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << std::endl;

    // DECRYPTION

    char encryptedText[256]; // the same length allowed for the normal text in the encryption
    int decrKey;

    std::cout << "DECRYPTION\n\n";
    std::cout << "Enter the encrypted text: ";
    std::cin.ignore(); // using cin.ignore because of the std::cin >> encrKey on row 220
    std::cin.getline(encryptedText, 256);
    std::cout << "Enter a decryption key [k != 0]: ";
    std::cin >> decrKey;

    if (decrKey == 0)
    {
        std::cout << "The key must be != 0. ";
        return 0;
    }

    // now we find the length of the encrypted text
    int encryptedTextLength = strCleanMsgLength(encryptedText); // we have only capital letters and numbers here, so it's oencrKeyay to use the same function
    int decrKeyAbs = absValue(decrKey);
    int decrMatrixRows = encryptedTextLength / decrKeyAbs; // we encrKeynow that decrKeyAbs divides encryptedTextLength WITHOUT remainder

    // init the needed matrix with new
    char **decrMatrix = new char *[decrMatrixRows];
    for (int i = 0; i < decrMatrixRows; ++i)
    {
        *(decrMatrix + i) = new char[decrKeyAbs];
    }

    // Some Notes about the decryption:
    // We can output the matrix with the original message, but we can't really output the "clean message" as a string
    // The reason for that is we can't account for the "human factor" of how many 'X' - s are needed for the clean message.
    // For example, if the clean message needs the ending 'X' as part of the message, and we remove it, it will be a failure.
    // If, on the other hand, we account for one 'X', what would happen if there are two, or more 'X' needed? Failure.
    // This makes the clean message output in the Decryption pointless, unless we want to risk "failing the operation".

    // cases according to decrKey
    if (decrKey > 0)
    {
        decrFromUpperLeft(encryptedText, decrMatrix, decrMatrixRows, decrKeyAbs);
    }
    else
    {
        decrFromLowerRight(encryptedText, decrMatrix, decrMatrixRows, decrKeyAbs);
    }

    // output the decryption matrix

    std::cout << "\nThe needed message for the mission is: \n";
    matrixOutput(decrMatrix, decrMatrixRows, decrKeyAbs);

    // delete the decrMatrix
    for (int i = 0; i < decrMatrixRows; ++i)
    {
        delete[] decrMatrix[i];
    }
    delete[] decrMatrix;

    return 0;
}
