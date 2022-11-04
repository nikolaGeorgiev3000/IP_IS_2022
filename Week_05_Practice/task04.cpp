#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    // print all three-digit numbers with distinct digits, and their count

    int counter = 0;
    for (int i = 100; i <= 999; i++)
    {
        int firstDigit = i / 100;
        int secondDigit = i / 10 % 10;
        int thirdDigit = i % 10;
        if (firstDigit != secondDigit && firstDigit != thirdDigit && secondDigit != thirdDigit)
        {
            cout << i << " ";
            counter++;
        }
    }
    cout << endl;
    cout << endl;
    cout << endl;
    cout << "The count of these uniqueDigits 3-digit numbers is: " << counter;

    return 0;
}