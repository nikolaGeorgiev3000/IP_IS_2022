#include <iostream>

int findSum(int *arr, int size)
{
    if (size < 1)
        return 0;

    return *arr + findSum(arr + 1, size - 1);
}

void arrayFill(int *arr, int size)
{
    for (int i = 0; i < size; ++i)
    {
        std::cout << "arr[" << i << "] = ";
        std::cin >> *(arr + i);
    }
    std::cout << std::endl;
}

void arrayOutput(int *arr, int size)
{
    for (int i = 0; i < size; ++i)
    {
        std::cout << *(arr + i) << "   ";
    }
    std::cout << std::endl;
}

int main()
{
    int size;
    std::cout << "Enter the size of the array: ";
    std::cin >> size;
    int *arr = new int[size];

    arrayFill(arr, size);

    std::cout << std::endl;

    std::cout << "Your array is: \n";
    arrayOutput(arr, size);

    std::cout << std::endl;

    int sum = findSum(arr, size);

    std::cout << "The sum of the elements of the array is: " << sum << std::endl;

    // delete arr
    delete[] arr;
    return 0;
}