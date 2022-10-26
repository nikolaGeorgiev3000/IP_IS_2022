#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main()
{
    int year;
    cout << "Enter a year: ";
    cin >> year;
    bool isLeap = ((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0);
    cout << std::boolalpha << isLeap;
    return 0;
}