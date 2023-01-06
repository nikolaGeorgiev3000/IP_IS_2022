#include <iostream>

bool checkIncrOrder(int *arr, int size)
{
    if (size <= 1)
    {
        // An array of size 0 or 1 is always considered to be in increasing order.
        return true;
    }

    // Check if the current element is larger than the next element. If it is,
    // return false. Otherwise, recursively check the rest of the array.
    if (arr[0] > arr[1])
    {
        return false;
    }
    else
    {
        return checkIncrOrder(arr + 1, size - 1);
    }
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

    std::cout << "The elements of the array are sorted in increasing order: " << std::boolalpha << checkIncrOrder(arr, size) << std::endl;

    // delete arr
    delete[] arr;
    return 0;
}