#include <iostream>
#include <iomanip>

void matrixFill(int **matrix, int r, int c)
{
    for (int i = 0; i < r; ++i)
    {
        for (int j = 0; j < c; ++j)
        {
            std::cout << "matrix[" << i << "][" << j << "] = ";
            std::cin >> matrix[i][j];
        }
        std::cout << std::endl;
    }
}

void matrixOutput(int **matrix, int r, int c)
{
    for (int i = 0; i < r; ++i)
    {
        for (int j = 0; j < c; ++j)
        {
            std::cout << std::setw(5) << matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

void findCoord(int **matrix, int r, int c, int searchNumber)
{
    int coordOne, coordTwo;
    for (int i = 0; i < r; ++i)
    {
        for (int j = 0; j < c; ++j)
        {
            if (matrix[i][j] == searchNumber)
            {
                coordOne = i;
                coordTwo = j;
                break;
            }
        }
        if (coordOne == i)
            break;
    }
    std::cout << std::endl;

    std::cout << "Coord one: " << coordOne << " Coord two: " << coordTwo << std::endl;
}

int main()
{
    int r, c, searchNumber;
    std::cout << "Enter dimensions of the matrix: \n";
    std::cout << "Rows = ";
    std::cin >> r;
    std::cout << "Cols = ";
    std::cin >> c;

    // init matrix with new
    int **matrix = new int *[r];
    for (int i = 0; i < r; ++i)
    {
        *(matrix + i) = new int[c];
    }

    std::cout << "\nFill your matrix: \n";
    matrixFill(matrix, r, c);

    std::cout << "Your matrix is: \n";
    matrixOutput(matrix, r, c);

    std::cout << "Enter a search number: ";
    std::cin >> searchNumber;

    findCoord(matrix, r, c, searchNumber);

    // free up memory (cleanUp)
    for (int i = 0; i < r; ++i)
    {
        delete[] * (matrix + i);
    }
    delete[] matrix;
    matrix = NULL;

    return 0;
}