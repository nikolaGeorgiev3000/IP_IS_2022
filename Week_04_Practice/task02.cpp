#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main()
{
    int number;
    cout << "Enter a number: ";
    cin >> number;
    switch (number)
    {
    case 0:
        cout << 1 << " circle"
             << ", zero.";
        break;
    case 1:
        cout << 0 << " circles"
             << ", one";
        break;
    case 2:
        cout << 0 << " circles"
             << ", two";
        break;
    case 3:
        cout << 0 << " circles"
             << ", three";
        break;
    case 4:
        cout << 0 << " circles"
             << ", four";
        break;
    case 5:
        cout << 0 << " circles"
             << ", five";
        break;
    case 6:
        cout << 1 << " circle"
             << ", six";
        break;
    case 7:
        cout << 0 << " circles"
             << ", seven";
        break;
    case 8:
        cout << 2 << " circles"
             << ", eight";
        break;
    case 9:
        cout << 1 << " circle"
             << ", nine";
        break;
    default:
        false;
    }
    return 0;
}
