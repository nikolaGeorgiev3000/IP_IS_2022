#include <iostream>

bool checkPowerOfTwo(int n)
{
    if (n == 1)
    {
        // 1 is considered to be a power of 2.
        return true;
    }
    else if (n % 2 != 0 || n < 1)
    {
        // If n is not a positive multiple of 2, it is not a power of 2.
        return false;
    }
    else
    {
        // If n is a positive multiple of 2, check if the quotient is a power of 2.
        return checkPowerOfTwo(n / 2);
    }
}

int main()
{
    int n;
    std::cout << "Enter a number: ";
    std::cin >> n;

    std::cout << "Your number is a power of two: " << std::boolalpha << checkPowerOfTwo(n) << std::endl;

    return 0;
}