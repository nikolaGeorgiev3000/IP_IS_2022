#include <iostream>
#include <iomanip>

const int MAX_SIZE = 100;

void matrixInput(int matrix[][MAX_SIZE], int rows, int cols)
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

void matrixOutput(int matrix[][MAX_SIZE], int rows, int cols)
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

int sumMainAndSecondDiag(int matrix[][MAX_SIZE], int rows, int cols)
{
    int sumMainDiag = 0, sumSecondDiag = 0;

    // sumMainDiag
    for (int i = 0; i < std::min(rows, cols); ++i)
    {
        sumMainDiag += matrix[i][i];
    }

    // sumSecondDiag
    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < cols; ++j)
        {
            if (i + j == (cols - 1))
            {
                sumSecondDiag += matrix[i][j];
            }
        }
    }

    // validation of a \"middle\" element
    if ((rows == cols) && (rows % 2 != 0))
    {
        return (sumMainDiag + sumSecondDiag) - matrix[cols / 2][cols / 2];
    }
    return sumMainDiag + sumSecondDiag;
}
int main()
{
    int matrix[MAX_SIZE][MAX_SIZE], rows, cols;

    std::cout << "Enter the dims of matrix: \n";
    std::cin >> rows >> cols;

    std::cout << std::endl;

    matrixInput(matrix, rows, cols);

    std::cout << std::endl;

    std::cout << "Your matrix is: \n";

    matrixOutput(matrix, rows, cols);

    std::cout << std::endl;
    
    std::cout << "The sum of the diags is: " << sumMainAndSecondDiag(matrix, rows, cols);
    return 0;
}