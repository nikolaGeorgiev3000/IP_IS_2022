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
    if (n == 0 || n == 1 || n % 2 == 0) // 0, 1 and any even number (besides 2) is not prime
    {
        return false;
    }
    for (int i = 3; i < sqrt(n); i += 2) // we skip the even numbers > 2
    {
        if (n % i == 0)
        {
            return false; // not prime
        }
    }
    return true;
}

bool pairedPrimes(int n1, int n2)
{
    return (isPrime(n1) && isPrime(n2) && (n1 + 2 == n2));
}

int main()
{
    int n1, n2;

    cout << "Enter two numbers, sequentially: \n";
    cin >> n1 >> n2;
    cout << std::boolalpha << pairedPrimes(n1, n2);

    return 0;
}