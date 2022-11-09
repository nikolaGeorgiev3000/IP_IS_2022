// Digit in number
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int countDigitInNumber(int wholeNumber, int digit)
{
    int counter = 0;
    while (wholeNumber)
    {
        if (digit == wholeNumber % 10)
        {
            counter++;
        }
        wholeNumber /= 10;
    }
    return counter;
}

int main()
{
    int n, digit;
    cout << "Enter a whole number, bigger than 100, and a digit, sequentially: \n";
    cin >> n >> digit;
    if (n <= 100)
    {
        cout << "Invalid input.";
        return 0;
    }
    cout << "Your digit is seen " << countDigitInNumber(n, digit) << " times in your number.";
    return 0;
}