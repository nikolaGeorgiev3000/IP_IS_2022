#include <iostream>

using std::cin;
using std::cout;
using std::endl;

double maxRealNumber(double a, double b)
{
    return (a > b) ? a : b;
}

int main()
{
    double a, b;
    cout << "Enter two real numbers, sequentially: \n";
    cin >> a >> b;
    cout << "The bigger number is: " << maxRealNumber(a, b);
    return 0;
}