// sumOfDigits
#include <iostream>

using namespace std;

int main()
{
    int number, sumOfDigits = 0;

    cout << "Enter a number: ";
    cin >> number;

    if (number < 0) // we calculate the sum of digits of a whole number, a bit diff from the originalCondition
    {
        number *= (-1); // we can easily handle positive numbers
    }

    while (number)
    {
        sumOfDigits += number % 10;
        number /= 10;
    }

    cout << "The sum of the digits is: " << sumOfDigits;

    return 0;
}