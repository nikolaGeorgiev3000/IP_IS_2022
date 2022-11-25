// transposed matrix
#include <iostream>
#include <iomanip>

using std::cin;
using std::cout;
using std::endl;

const int MAX_ROWS = 100;
const int MAX_COLS = 100;

void transposeMatrix(int n, int m, int matrix[][MAX_COLS])
{
    for (int i = 0; i <= m - 1; ++i)
    {
        for (int j = 0; j <= n - 1; ++j)
        {
            cout << std::setw(5) << matrix[j][i];
        }
        cout << endl;
    }
}

int main()
{
    int n, m, matrix[MAX_ROWS][MAX_COLS];

    cout << "Enter rows, columns, sequentially: \n";

    do
    {
        cin >> n >> m;
    } while (n < 1 || n > 100 || m < 1 || m > 100);

    cout << "Enter the matrix: \n";

    for (int i = 0; i <= n - 1; ++i)
    {
        for (int j = 0; j <= m - 1; ++j)
        {
            cout << "matrix[" << i << "][" << j << "] = ";
            cin >> matrix[i][j];
        }
    }

    cout << "The transposed matrix is: \n";

    transposeMatrix(n, m, matrix);
    return 0;
}