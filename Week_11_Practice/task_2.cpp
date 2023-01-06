#include <iostream>

int findNthFib(int n)
{
    if (n == 0)
    {
        // The 0th number in the Fibonacci sequence is 0.
        return 0;
    }
    else if (n == 1)
    {
        // The 1st number in the Fibonacci sequence is 1.
        return 1;
    }
    else
    {
        // For any other value of n, the nth number in the Fibonacci sequence is
        // the sum of the (n-1)th and (n-2)th numbers.
        return findNthFib(n - 1) + findNthFib(n - 2);
    }
}

int main()
{
    int n;
    std::cout << "Enter n: ";
    std::cin >> n;

    int nThFib = findNthFib(n);
    std::cout << "The n-th number-index of the Fibonacci sequence is: " << nThFib << std::endl;

    return 0;
}