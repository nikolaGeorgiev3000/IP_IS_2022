#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main()
{
    int dayOfTheWeek;
    cout << "Enter a day of the week [1 - 7]: ";
    cin >> dayOfTheWeek;
    switch (dayOfTheWeek)
    {
    case 1:
        cout << "Monday" << endl;
        break;
    case 2:
        cout << "Tuesday" << endl;
        break;
    case 3:
        cout << "Wednesday" << endl;
        break;
    case 4:
        cout << "Thursday" << endl;
        break;
    case 5:
        cout << "Friday" << endl;
        break;
    case 6:
        cout << "Saturday" << endl;
        break;
    case 7:
        cout << "Sunday" << endl;
        break;
    default:
        cout << "Enter a valid number.";
    }
    return 0;
}