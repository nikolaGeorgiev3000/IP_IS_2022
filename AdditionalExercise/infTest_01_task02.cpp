// longest subNumber + its digit
#include <iostream>
using namespace std;

int main()
{
    long long n;
    cout << "n = ";
    cin >> n;
    long long impDigit, currentBiggest = 0, counter = 1, prevDigit = n % 10;
    n /= 10;
    while (n)
    {
        long long currentDigit = n % 10;
        if (prevDigit == currentDigit)
        {
            counter++;
        }

        else
        {
            if (counter > currentBiggest)
            {
                currentBiggest = counter;
                impDigit = prevDigit;
            }
            counter = 1;
            prevDigit = n % 10;
        }
        n /= 10;
    }
    if (counter > currentBiggest) // taking care of the longest subNumber in the beginning of a number
    {
        currentBiggest = counter;
        impDigit = prevDigit;
    }
    cout << "Length: " << currentBiggest << " Digit: (" << impDigit << ")";

    return 0;
}
