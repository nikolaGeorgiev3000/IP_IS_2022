// printsOutFirstNFibNumbers
#include <iostream>

using namespace std;

int main()
{
    int f1 = 0, f2 = 1, next, n; // f1 and f2 are pre-defined in the sequence
    cout << "Enter a threshold number: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cout << f1 << " "; // we start with f1, because the Fibonacci Series is defined 0, 1, 1, 2, 3, 5, 8, 13, 21, etc...
        next = f1 + f2;
        f1 = f2;
        f2 = next;
    }
    return 0;
}