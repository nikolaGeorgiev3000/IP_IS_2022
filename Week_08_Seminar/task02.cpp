// isSymmetric
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

const int MAX_ROWS = 100;
const int MAX_COLS = 100;

bool isSymmetric(int n, int matrix[][MAX_COLS])
{
    for (int i = 0; i <= n - 1; ++i)
    {
        for (int j = 0; j <= n - 1; ++j)
        {
            if (matrix[i][j] != matrix[j][i])
            {
                return false;
            }
        }
    }
    return true;
}

int main()
{
    int n, matrix[MAX_ROWS][MAX_COLS];

    cout << "Enter size: ";
    do
    {
        cin >> n;
    } while (n < 1);

    cout << endl;

    cout << "Enter matrix: \n";
    for (int i = 0; i <= n - 1; ++i)
    {
        for (int j = 0; j <= n - 1; ++j)
        {
            cout << "matrix[" << i << "][" << j << "] = ";
            cin >> matrix[i][j];
        }
    }

    cout << endl;

    cout << "Is symmetric: " << std::boolalpha << isSymmetric(n, matrix);

    return 0;
}