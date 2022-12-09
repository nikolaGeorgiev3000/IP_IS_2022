#include <iostream>
#include <iomanip>

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
        std::cout << std::setw(5) << *(arr + i) << " ";
    }
}

void findMinAndMax(int *arr, int size, int *min, int *max)
{
    for (int i = 1; i < size; ++i)
    {
        if (*(arr + i) < *min)
        {
            *min = *(arr + i);
        }
        if (*(arr + i) > *max)
        {
            *max = *(arr + i);
        }
    }
}

int main()
{
    int arrSize, min, max;
    std::cout << "Enter the size of array: ";
    std::cin >> arrSize;

    int *arr = new int[arrSize];

    // arr input
    std::cout << "\nEnter your array: \n";
    arrayInput(arr, arrSize);

    min = *arr; // min === first element of the array
    max = *arr; // max === first element of the array

    // arr output
    std::cout << "\nYour array is: \n";
    arrayOutput(arr, arrSize);

    findMinAndMax(arr, arrSize, &min, &max);

    std::cout << "\nMin = " << min;
    std::cout << "\nMax = " << max;

    // clean up
    delete[] arr;
    arr = NULL;

    return 0;
}