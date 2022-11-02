#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    bool isPower = true;
    if (n <= 0) // nothing below 0, and including it, is a power of two
    {
        cout << std::boolalpha << false;
        return 0;
    }
    while (n)
    {
        if (n % 2 != 0 && n != 1) // if n is 1, it is a power of two, because 2^0 = 1
        {
            isPower = false;
        }
        n /= 2; // looping until we reach n = 0, so we get out of the while-loop
    }
    cout << std::boolalpha << isPower << endl;
    return 0;
}