// if - else exercise
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    int fourDigitNumber, firstDigit, secondDigit, thirdDigit, fourthDigit;

    cout << "Enter a four-digit number: ";
    cin >> fourDigitNumber;
    firstDigit = fourDigitNumber / 1000;
    secondDigit = fourDigitNumber / 100 % 10;
    thirdDigit = fourDigitNumber / 10 % 10;
    fourthDigit = fourDigitNumber % 10;

    bool isContainsFive = (firstDigit == 5) || (secondDigit == 5) || (thirdDigit == 5) || (fourthDigit == 5);
    bool isEven = (fourDigitNumber % 2 == 0);
    bool isDivByFive = (fourDigitNumber % 5 == 0);

    if (isContainsFive)
    {
        if (isDivByFive)
        {
            cout << "The number " << fourDigitNumber << " contains the digit 5 and it is divisible by 5." << endl;
        }
        else
        {
            cout << "The number " << fourDigitNumber << " contains the digit 5 and it is not divisible by 5." << endl;
        }
        return 0;
    }

    else if (isEven)
    {
        cout << "The number " << fourDigitNumber << " does not contain the digit 5 and it is even." << endl;
    }
    else
    {
        cout << "The number " << fourDigitNumber << " does not contain the digit 5 and it is odd." << endl;
    }

    return 0;
}