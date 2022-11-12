// first n numbers which are prime and palindromes

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

int reverse(int n)
{
    int result = 0;
    while (n != 0)
    {
        (result *= 10) += (n % 10);
        n /= 10;
    }
    return result;
}

bool isPalindrome(int n)
{
    return (n == reverse(n));
}

void primesAndPalindromes(int n)
{
    int primeAndPalindrome = 2;
    while (n != 0)
    {
        if (isPrime(primeAndPalindrome) && isPalindrome(primeAndPalindrome))
        {
            cout << primeAndPalindrome << " ";
            n--;
        }
        ++primeAndPalindrome;
    }
}
int main()
{
    unsigned int n;

    cout << "Enter n: ";
    cin >> n;
    primesAndPalindromes(n);

    return 0;
}