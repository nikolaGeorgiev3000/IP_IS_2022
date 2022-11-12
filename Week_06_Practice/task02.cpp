#include <iostream>
#include <cmath>

using std::cin;
using std::cout;
using std::endl;

bool isPrime(int n)
{
    if (n == 2)
    {
        return true;
    }
    if (n == 0 || n == 1 || n % 2 == 0)
    {
        return false;
    }
    for (int i = 3; i <= sqrt(n); i += 2)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

void printPrimesBelowHundred()
{
    for (int i = 2; i < 100; ++i)
    {
        if (isPrime(i))
        {
            cout << i << " ";
        }
    }
}

int main()
{
    printPrimesBelowHundred();
    return 0;
}