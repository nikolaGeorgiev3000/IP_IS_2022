// sumUntil0
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    int tempNumber, sum = 0;

    do
    {
        cout << "Enter a number: ";
        cin >> tempNumber;
        sum += tempNumber;
    } while (tempNumber != 0); // === while(tempNumber)

    cout << "The sum of your numbers is: " << sum;

    return 0;
}