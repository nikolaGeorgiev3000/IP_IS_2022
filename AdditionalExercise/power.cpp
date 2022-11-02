#include <iostream>

using namespace std;

int main()
{
    int n, powersOfTwo = 1;
    cout << "Enter a number: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        powersOfTwo *= 2;
    }
    cout << powersOfTwo;
    return 0;
}