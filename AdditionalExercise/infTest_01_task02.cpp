// longest subNumber + its digit
#include <iostream>
using namespace std;

int main()
{
    long long n;
    cout << "n = ";
    cin >> n;
    long long impDigit, currentBiggest = 0, counter = 1, currentDigit = n % 10;
    n /= 10;
    while (n)
    {

        long long helpDigit = n % 10;
        if (currentDigit == helpDigit)
        {
            counter++;
        }

        else
        {
            if (counter > currentBiggest)
            {
                currentBiggest = counter;
                counter = 0;
                impDigit = currentDigit;
            }
            counter = 1;
            currentDigit = n % 10;
        }
        n /= 10;
    }
    if (counter > currentBiggest) // taking care of the longest subNumber in the beginning of a number
    {
        currentBiggest = counter;
        counter = 0;
        impDigit = currentDigit;
    }
    cout << "Length: " << currentBiggest << " Digit: (" << impDigit << ")";

    return 0;
}
