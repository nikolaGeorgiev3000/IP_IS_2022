// drawing
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << endl; // for clarity
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (j >= i) // mainDiagonal is filled with '+', as well as above it, where the column index j is bigger than the row index i
            {
                cout << '+' << " ";
            }
            else
            {
                cout << '-' << " ";
            }
        }
        cout << endl;
    }

    return 0;
}