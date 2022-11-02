// primeNumber
#include <iostream>

using namespace std;

int main()
{
    int number;

    cout << "Enter a number: ";
    cin >> number;

    bool flag = false;

    if (number == 1) // 1 is defined to not be a prime number, because a prime number needs exactly 2 divisors, and '1' has only one divisor
    {
        cout << number << " is not a prime number.";
    }

    for (int i = 2; i <= number / 2; i++)
    {
        if (number % i == 0)
        {
            cout << number << " is not a prime number.\n";
            flag = true;
            break; // we have found one divisor, no need to continue looping
        }
    }

    if (!flag)
    {
        cout << number << " is a prime number.\n";
    }

    return 0;
}