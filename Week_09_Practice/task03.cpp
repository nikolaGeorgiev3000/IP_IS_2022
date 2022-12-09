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

void arrayScaled(int *arr, int size, int scalar)
{
    for (int i = 0; i < size; ++i)
    {
        *(arr + i) *= scalar;
    }
}

// realScalar
// void arrayScaled(double *arr, int size, double scalar)
// {
//     for (int i = 0; i < size; ++i)
//     {
//         *(arr + i) *= scalar;
//     }
// }

int main()
{
    int size, scalar1;
    std::cout << "Enter size of array: ";
    std::cin >> size;
    std::cout << "Enter scalar: ";
    std::cin >> scalar1;

    int *arr = new int[size];

    // arrInput
    std::cout << "Enter array: \n";
    arrayInput(arr, size);

    // arrOutput
    std::cout << "Normal array: \n";
    arrayOutput(arr, size);
    std::cout << std::endl;

    arrayScaled(arr, size, scalar1);

    // multipliedArray
    std::cout << "Scaled array: \n";
    arrayOutput(arr, size);

    // clean up
    delete[] arr;
    arr = NULL;

    return 0;
}