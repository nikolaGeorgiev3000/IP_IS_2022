#include <iostream>
#include <iomanip>

const int MAX_SIZE = 100;

void inputMatrix(int matrix[][MAX_SIZE], int rows, int cols)
{
    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < cols; ++j)
        {
            std::cout << "matrix[" << i << "][" << j << "] = ";
            std::cin >> matrix[i][j];
        }
        std::cout << std::endl;
    }
}

void outputMatrix(int matrix[][MAX_SIZE], int rows, int cols)
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

void multiplyMatrices(int matrix1[][MAX_SIZE], int matrix2[][MAX_SIZE], int multipliedMatrix[][MAX_SIZE], int rows1, int rows2, int cols1, int cols2)
{
    // fill the multiplied matrix with zeros
    for (int i = 0; i < rows1; ++i)
    {
        for (int j = 0; j < cols2; ++j)
        {
            multipliedMatrix[i][j] = 0;
        }
    }

    // multiply the matrices
    for (int i = 0; i < rows1; ++i)
    {
        for (int j = 0; j < cols2; ++j)
        {
            for (int k = 0; k < rows2; ++k)
            {
                multipliedMatrix[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
}

bool isMult(int cols1, int rows2)
{
    return (cols1 == rows2) ? true : false;
}

int main()
{
    int rows1, rows2, cols1, cols2, matrix1[MAX_SIZE][MAX_SIZE], matrix2[MAX_SIZE][MAX_SIZE], multMatrix[MAX_SIZE][MAX_SIZE];

    std::cout << "Enter dims of matrix1: \n";
    std::cin >> rows1 >> cols1;
    std::cout << "Enter dims of matrix2: \n";
    std::cin >> rows2 >> cols2;

    // mult validation
    if (!(isMult(cols1, rows2)))
    {
        std::cout << "Can't be multiplied.\n";
        return 0;
    }

    std::cout << "Matrix1\n";
    inputMatrix(matrix1, rows1, cols1);
    std::cout << std::endl;
    std::cout << "Matrix2\n";
    inputMatrix(matrix2, rows2, cols2);
    std::cout << std::endl;

    multiplyMatrices(matrix1, matrix2, multMatrix, rows1, rows2, cols1, cols2);

    std::cout << "The multiplied matrix is: \n";
    outputMatrix(multMatrix, rows1, cols2);

    return 0;
}