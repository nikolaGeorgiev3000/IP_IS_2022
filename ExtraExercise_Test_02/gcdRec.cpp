#include <iostream>

int findGcd(const int a, const int b)
{
    // Euclidean algorithm
    if (b == 0)
    {
        return a;
    }
    return findGcd(b, a % b);

    // By the partial definition of GCD
    // if (a == b)
    //     return a;
    // if (a > b)
    //     return findGcd(a - b, b);

    // return findGcd(a, b - a);
}

int main()
{
    int a, b;
    std::cout << "Enter two numbers: \n";
    std::cin >> a >> b;
    std::cout << "The gcd of " << a << " and " << b << " is: ";
    std::cout << findGcd(a, b);
    std::cout << std::endl;

    return 0;
}