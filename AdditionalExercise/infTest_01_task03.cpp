// prints out all suffixes of n, which are palindromes
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

unsigned int reverse(unsigned n);
bool isPalindrome(unsigned n);
void printSuffPal(unsigned n);

unsigned int reverse(unsigned n)
{
    int reversedNumber = 0;
    while (n != 0)
    {
        (reversedNumber *= 10) += (n % 10);
        n /= 10;
    }
    return reversedNumber;
}

bool isPalindrome(unsigned n)
{
    return (n == reverse(n));
}

void printSuffPal(unsigned n)
{
    int suffPal = n % 10;
    int help = n;
    while (n != 0)
    {
        if (isPalindrome(suffPal))
        {
            if (help > n)
                cout << ", "; // comma validation
            cout << suffPal;
        }
        n /= 10;
        (suffPal *= 10) += (n % 10);
    }
}

int main()
{
    unsigned int n;

    cout << "Enter a natural number: ";
    cin >> n;

    printSuffPal(n);
    return 0;
}
