#include <iostream>

int findMin(int *arr, int size)
{
    if (size == 1)
    {
        // If there is only one element in the array, it is the minimum.
        return *arr;
    }

    // Find the minimum of the rest of the array.
    int min = findMin(arr + 1, size - 1);

    // Return the minimum of the current element and the minimum of the rest of the array.
    return (*arr < min) ? *arr : min;
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

    int minElement = findMin(arr, size);

    std::cout << "The minimum element of your array is: " << minElement << std::endl;

    // delete arr
    delete[] arr;
    return 0;
}