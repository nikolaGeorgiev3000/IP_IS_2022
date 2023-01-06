#include <iostream>

double findSum(double *arr, int size)
{
    if (size < 2)
    {
        // The array has less than 2 elements, so there are no elements that have
        // a "next" element. In this case, we can just return 0.
        return 0.0; // Returning a double value
    }

    // Check if the current element is a valid element to include in the sum.
    // If it is, add it to the sum and recursively call the function with the
    // rest of the array. Otherwise, just recursively call the function with the
    // rest of the array.
    if ((*arr >= 0) && (*arr > *(arr + 1)))
    {
        return *arr + findSum(arr + 1, size - 1);
    }
    else
    {
        return findSum(arr + 1, size - 1);
    }
}

void arrayFill(double *arr, int size)
{
    for (int i = 0; i < size; ++i)
    {
        std::cout << "arr[" << i << "] = ";
        std::cin >> *(arr + i);
    }
    std::cout << std::endl;
}

void arrayOutput(double *arr, int size)
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
    double *arr = new double[size];

    arrayFill(arr, size);

    std::cout << std::endl;

    std::cout << "Your array is: \n";
    arrayOutput(arr, size);

    std::cout << std::endl;

    double sum = findSum(arr, size);

    std::cout << "The sum is: " << sum << std::endl;

    delete[] arr;

    return 0;
}