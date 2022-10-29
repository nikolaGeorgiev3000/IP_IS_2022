#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main()
{
    int month, year;
    cout << "Enter a month [1 - 12]: ";
    cin >> month;
    cout << "Enter a year: ";
    cin >> year;
    bool isLeap = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
    switch (month)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        cout << 31 << " days";
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        cout << 30 << "days";
        break;
    case 2:
        cout << 28 + isLeap << " days" << endl;
        break;

    default:
        cout << "Invalid month.";
    }
    return 0;
}