#include <iostream>

using std::cin;
using std::cout;
using std::endl;

void wholeSolutions(int a, int b, int c, int d, int e)
{
    for (int i = -100; i <= 100; i++)
    {
        if ((a * i * i * i * i + b * i * i * i + c * i * i + d * i + e) >= 0) // we've been advised not to use std::pow(base, power)
        {
            cout << i << " ";
        }
    }
}

int main()
{
    int a, b, c, d, e;

    cout << "Enter coef: \n";
    cin >> a >> b >> c >> d >> e;

    wholeSolutions(a, b, c, d, e);

    return 0;
}