#include <iostream>

void arrayInput(int *arr, int size)
{
    for (int i = 0; i < size; ++i)
    {
        std::cout << "arr[" << i << "] = ";
        std::cin >> *(arr + i);
    }
}

void arrayOutput(int *arr, int size)
{
    for (int i = 0; i < size; ++i)
    {
        std::cout << *(arr + i) << " ";
    }
}

int *findAddress(int *arr, int size, int element)
{
    for (int i = 0; i < size; ++i)
    {
        if (*(arr + i) == element)
        {
            return (arr + i); // === &arr[i]
        }
    }
    return nullptr;
}

int main()
{
    int size, element;
    std::cout << "Enter size of array: ";
    std::cin >> size;

    int *arr = new int[size];

    std::cout << std::endl;
    std::cout << "Enter the array: \n";
    arrayInput(arr, size);

    std::cout << "\nYour array is: \n";
    arrayOutput(arr, size);

    std::cout << std::endl;

    std::cout << "\nEnter an element: ";
    std::cin >> element;

    std::cout << "\nYour element is on address: " << findAddress(arr, size, element);

    // clean up
    delete[] arr;
    arr = NULL;

    return 0;
}