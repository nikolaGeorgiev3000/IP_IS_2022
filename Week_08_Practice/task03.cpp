// transpose matrix
#include <iostream>
#include <iomanip>

using std::cin;
using std::cout;
using std::endl;

const int MAX_ROWS_COLS = 100;

void transposeMatrix(int matrix[][MAX_ROWS_COLS], int rows, int cols)
{
    for (int i = 0; i < cols; ++i)
    {
        for (int j = 0; j < rows; ++j)
        {
            cout << matrix[j][i] << " ";
        }
        cout << endl;
    }
}

void fillMatrix(int matrix[][MAX_ROWS_COLS], int rows, int cols)
{
    for (int i = 0; i <= rows - 1; ++i)
    {
        for (int j = 0; j <= cols - 1; ++j)
        {
            cout << "matrix[" << i << "][" << j << "] = ";
            cin >> matrix[i][j];
        }
        cout << endl;
    }
}

int main()
{
    int matrix[MAX_ROWS_COLS][MAX_ROWS_COLS], rows, cols;

    cin >> rows >> cols;

    fillMatrix(matrix, rows, cols);
    transposeMatrix(matrix, rows, cols);
}