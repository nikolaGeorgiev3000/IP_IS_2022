#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    // prints all 3-digit numbers, which are divisible by the product of their digits
    for (int i = 100; i <= 999; i++)
    {
        int firstDigit = i / 100;
        int secondDigit = i / 10 % 10;
        int thirdDigit = i % 10;
        int productOfDigits = firstDigit * secondDigit * thirdDigit;
        if ((productOfDigits != 0) && (i % productOfDigits == 0))
        {
            cout << i << " ";
        }
    }

    cout << endl;
    cout << endl;

    return 0;
}