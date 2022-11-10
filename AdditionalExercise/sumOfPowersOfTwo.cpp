#include <iostream>

using std::cin;
using std::cout;
using std::endl;

void numberAsSumOfPowersOfTwo(int n)
{
    while (n != 0)
    {
        int pow = 0;
        int addend = 1;

        while (addend * 2 <= n) // each of these while's are the addends
        {
            addend *= 2;
            ++pow;
        }

        n -= addend;
        cout << "2^" << pow; // each of the addends

        if (n != 0) // if n != 0, then there are more addends to gather
        {
            cout << " + ";
        }
    }
}

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (n < 1)
    {
        cout << "Invalid input";
        return 0;
    }

    numberAsSumOfPowersOfTwo(n);

    return 0;
}