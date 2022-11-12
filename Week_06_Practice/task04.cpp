#include <iostream>

using std::cin;
using std::cout;
using std::endl;

bool isPowerOfTwo(int n)
{
    if (n <= 0)
    {
        return false;
    }
    while (n)
    {
        if (n % 2 != 0 && n != 1)
        {
            return false;
        }
        n /= 2;
    }
    return true;
}

int main()
{
    int n;

    cout << "Enter n: ";
    cin >> n;
    cout << std::boolalpha << isPowerOfTwo(n);

    return 0;
}