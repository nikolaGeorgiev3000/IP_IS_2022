#include <iostream>
#include <iomanip>

void matrixInput(int **matrix, int rows, int cols)
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

void matrixOutput(int **matrix, int rows, int cols)
{
    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < cols; ++j)
        {
            std::cout << std::setw(5) << matrix[i][j];
        }
        std::cout << std::endl;
    }
}

void modifyAndSortMatrix(int **matrix, int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        int sum = 0;
        for (int j = 0; j < cols; j++)
        {
            sum += matrix[i][j];
        }
        matrix[i][cols] = sum;
    }

    for (int i = 0; i < rows - 1; i++)
    {
        for (int j = i + 1; j < rows; j++)
        {
            if (matrix[i][cols] > matrix[j][cols])
            {
                int *temp = matrix[i];
                matrix[i] = matrix[j];
                matrix[j] = temp;
            }
        }
    }
}

int main()
{
    int n, m;
    std::cout << "Rows: ";
    std::cin >> n;
    std::cout << "Columns: ";
    std::cin >> m;

    // Init the matrix with new
    int **matrix = new int *[n];
    for (int i = 0; i < n; ++i)
    {
        matrix[i] = new int[m];
    }

    std::cout << "Fill the matrix: \n";
    matrixInput(matrix, n, m);

    std::cout << std::endl;

    // Sort the matrix
    modifyAndSortMatrix(matrix, n, m);

    // Output the matrix:
    std::cout << "\nThe sorted matrix is: \n";

    matrixOutput(matrix, n, m);

    // Free the heap
    for (int i = 0; i < n; ++i)
    {
        delete[] matrix[i];
    }
    delete[] matrix;

    return 0;
}