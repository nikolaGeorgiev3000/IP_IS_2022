#include <iostream>

using std::cin;
using std::cout;
using std::endl;

void isFirstPowerOfSecond(int a, int b)
{
    bool isPower = false;
    int helpPower = 1;
    int powerCounter = 0;

    for (int i = 0; helpPower < a; ++i)
    {
        helpPower *= b;
        powerCounter++;
    }

    if (helpPower == a)
    {
        isPower = true;
        cout << std::boolalpha << isPower << endl;
        cout << "The power is: " << powerCounter;
    }
    else
    {
        isPower = false;
        cout << std::boolalpha << isPower;
    }
}

int main()
{
    int a, b;

    cout << "Enter a, b: \n";
    cin >> a >> b;

    isFirstPowerOfSecond(a, b);

    return 0;
}