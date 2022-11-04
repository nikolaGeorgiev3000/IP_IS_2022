#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    // n! program, we will use for-loop

    int n, factorial = 1;

    cout << "Enter a number: ";
    cin >> n;

    if (n < 0)
    {
        cout << "Oopsss...Factorials can only be taken of natural numbers.";
        return 0;
    }

    for (int i = 1; i <= n; i++)
    {
        factorial *= i;
    }

    cout << n << " factorial is equal to " << factorial << endl;

    return 0;
}