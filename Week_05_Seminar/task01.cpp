// factorial
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    int number, factorial = 1;

    cout << "Enter a natural number: ";
    cin >> number;

    if (number < 0) // we can only take fact of natural numbers
    {
        cout << "Oops...";
        return 0;
    }

    for (int i = 2; i <= number; i++) // We can start from i = 2, because 0! === 1! === 1
    {
        factorial *= i;
    }

    cout << number << "! is equal to " << factorial;

    return 0;
}