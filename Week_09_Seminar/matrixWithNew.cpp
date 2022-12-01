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
int main()
{
    int r, c;
    std::cout << "Enter dims of matrix: \n";
    std::cin >> r >> c;
    std::cout << std::endl;

    // init the matrix with new
    int **matrix = new int *[r];
    for (int i = 0; i < r; ++i)
    {
        matrix[i] = new int[c];
    }

    matrixFill(matrix, r, c);

    std::cout << "Your matrix is: \n";
    matrixOutput(matrix, r, c);

    // delete matrix
    for (int i = 0; i < r; ++i)
    {
        delete[] matrix[i];
    }
    delete[] matrix;

    return 0;
}