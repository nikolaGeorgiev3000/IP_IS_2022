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
    }
}

void arrayInput(int array[], int n)
{
    for (int i = 0; i < n; ++i)
    {
        std::cout << "array[" << i << "] = ";
        std::cin >> array[i];
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

int indexOfColumn(int matrix[MAX_SIZE][MAX_SIZE], int rows, int cols, int array[])
{
    int currentCount = 0, maxCount = 0, index;
    for (int i = 0; i < cols; ++i)
    {
        for (int j = 0; j < rows; ++j)
        {
            if (matrix[j][i] == array[j])
            {
                ++currentCount;
                if (currentCount > maxCount)
                {
                    maxCount = currentCount;
                    index = i;
                }
            }
            else
            {
                currentCount = 0;
            }
        }
    }
    return index;
}

int main()
{
    int matrix[MAX_SIZE][MAX_SIZE], rows, array[MAX_SIZE], arraySize;

    std::cout << "Enter matrix rows: \n";
    std::cin >> rows;

    std::cout << "Enter your matrix:\n";
    matrixInput(matrix, rows, 5);
    std::cout << "Your matrix is: \n";
    matrixOutput(matrix, rows, 5);
    std::cout << std::endl;

    std::cout << "Enter array size: \n";
    std::cin >> arraySize;
    std::cout << "Enter your array: \n";
    arrayInput(array, arraySize);

    std::cout << std::endl;

    std::cout << "Your index is: " << indexOfColumn(matrix, rows, 5, array);

    return 0;
}