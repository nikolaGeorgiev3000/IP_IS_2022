#include <iostream>

void swapNumbers(int *a, int *b)
{
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}

// realNumbers
// void swapNumbers(double *a, double *b)
// {
//     *a = *a + *b;
//     *b = *a - *b;
//     *a = *a - *b;
// }

int main()
{
    int a1, b1;
    // double a2, b2;
    std::cout << "Enter values:\na = ";
    std::cin >> a1;
    std::cout << "b = ";
    std::cin >> b1;

    // std::cout << "Enter two numbers, sequentially: \n";
    // std::cin >> a2 >> b2;

    swapNumbers(&a1, &b1);
    // swapNumbers(&a2, &b2);

    std::cout << std::endl;

    std::cout << "New values: \n";
    std::cout << "a = " << a1 << std::endl;
    std::cout << "b = " << b1 << std::endl;
    // std::cout << "a = " << a2 << std::endl;
    // std::cout << "b = " << b2 << std::endl;
    return 0;
}