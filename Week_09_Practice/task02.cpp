#include <iostream>

int oldVsNew(int *a, int *b)
{
    int oldFirst = *a;
    *a = *b;
    return oldFirst;
}

int main()
{
    int a, b;
    std::cout << "Enter two numbers:\na = ";
    std::cin >> a;
    std::cout << "b = ";
    std::cin >> b;

    std::cout << std::endl;

    std::cout << "Old: " << oldVsNew(&a, &b);
    std::cout << ", New: " << a;

    return 0;
}