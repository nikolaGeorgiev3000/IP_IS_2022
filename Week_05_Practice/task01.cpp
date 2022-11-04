#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    // enterTwoDigitNumberUntilYouSucceed

    bool flag = false; // the flag is down
    int n;

    cout << "Enter a two-digit whole number: \n";

    do
    {
        cin >> n;
        if (n >= 10 && n <= 99)
        {
            flag = true; // we found a two-digit number
        }
    } while (!flag);

    cout << endl; // for clarity
    cout << "Nice.";
    return 0;
}