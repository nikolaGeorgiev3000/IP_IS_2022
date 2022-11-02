#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    int n, powerOfTwo = 1;
    cout << "Enter a threshold number: ";
    cin >> n;
    // for (int i = 0; powerOfTwo <= n; i++) // unoptimized
    // {
    //     cout << powerOfTwo << " ";
    //     powerOfTwo *= 2;
    // }

    cout << "\t";
    for (int i = 1; i <= n; i *= 2) // optimized
    {
        cout << i << " ";
    }
    return 0;
}