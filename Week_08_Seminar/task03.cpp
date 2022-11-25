#include <iostream>
#include <iomanip>

using std::cin;
using std::cout;
using std::endl;

const int MAX_ROWS = 100;
const int MAX_COLS = 100;

bool isMult(int cols1, int rows2)
{
    return (cols1 == rows2) ? true : false;
}

void multOfMatrices(int rows1, int cols1, int rows2, int cols2, int matrix1[][MAX_COLS], int matrix2[][MAX_COLS])
{
    int multipliedMatrix[MAX_ROWS][MAX_COLS];

    // init elements of multMatrix to be all zeros
    for (int i = 0; i <= rows1 - 1; ++i)
    {
        for (int j = 0; j <= cols2 - 1; ++j)
        {
            multipliedMatrix[i][j] = 0;
        }
    }

    // Multiplication process...
    for (int i = 0; i <= rows1 - 1; ++i)
    {
        for (int j = 0; j <= cols2 - 1; ++j)
        {
            for (int k = 0; k <= rows2 - 1; ++k)
            {
                multipliedMatrix[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    // Output
    cout << "\nThe multiplied matrix is: \n";
    for (int i = 0; i <= rows1 - 1; ++i)
    {
        for (int j = 0; j <= cols2 - 1; ++j)
        {
            cout << std::setw(5) << multipliedMatrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int n1, m1, n2, m2, matrix1[MAX_ROWS][MAX_COLS], matrix2[MAX_ROWS][MAX_COLS];
    cout << "Enter dims of matrix1: \n";
    do
    {
        cin >> n1 >> m1;
    } while (n1 < 1 || n1 > 100 || m1 < 1 || m1 > 100);

    cout << "Enter matrix1: \n";
    for (int i = 0; i <= n1 - 1; ++i)
    {
        for (int j = 0; j <= m1 - 1; ++j)
        {
            cout << "matrix1[" << i << "][" << j << "] = ";
            cin >> matrix1[i][j];
        }
        cout << "\n";
    }

    cout << "Enter dims of matrix2: \n";
    do
    {
        cin >> n2 >> m2;
    } while (n2 < 1 || n2 > 100 || m2 < 1 || m2 > 100);

    // multiplication of matrices validation
    if (!(isMult(m1, n2)))
    {
        cout << "\nColumns of matrix1 should be equal to rows of matrix2.\n";
        return 0;
    }

    cout << "\nEnter matrix2: \n";
    for (int i = 0; i <= n2 - 1; ++i)
    {
        for (int j = 0; j <= m2 - 1; ++j)
        {
            cout << "matrix2[" << i << "][" << j << "] = ";
            cin >> matrix2[i][j];
        }
        cout << "\n";
    }

    multOfMatrices(n1, m1, n2, m2, matrix1, matrix2);

    return 0;
}