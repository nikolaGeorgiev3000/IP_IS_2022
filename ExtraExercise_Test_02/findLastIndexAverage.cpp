#include <iostream>

int findLastIndex(double *arr, int size)
{
    for (int i = size - 2; i > 0; --i) // Start from size - 2 since the last element does not have
                                       // two neighbours
    {
        if (arr[i] == (arr[i + 1] + arr[i - 1]) / 2.0)
        {
            return i;
        }
    }

    return 0;
}

int main()
{
    double arr[] = {1, 2, 1, 4, 1, 2, 6};
    int size = sizeof(arr) / sizeof(arr[0]);

    int lastIndex = findLastIndex(arr, size);

    if (lastIndex == 0)
    {
        std::cout << "There is no such element in your array.";
    }
    else
    {
        std::cout << "The last index of an element of your array which is equal to its neighbours is: ";
        std::cout << lastIndex << "." << std::endl;
    }
    return 0;
}