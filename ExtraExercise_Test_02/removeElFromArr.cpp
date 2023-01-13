#include <iostream>

void removeElementFromArr(int *&arr, int &size, int number)
{
    int i = 0, j = 0; // Index 'j' does not care for the "number", index 'i' will be the new size
    while (j < size)
    {
        if (arr[j] != number)
        {
            arr[i] = arr[j];
            i++;
        }
        j++;
    }
    int newSize = i;
    int *newArr = new int[newSize];
    for (int k = 0; k < newSize; k++)
    {
        newArr[k] = arr[k];
    }
    delete[] arr;
    arr = newArr;
    size = newSize;
}

int main()
{
    int size = 10;
    int *arr = new int[size]{1, 2, 3, 25, 6, 6, 2, 1, 7, 6};
    int number = 6;
    std::cout << "Original array: ";
    for (int i = 0; i < 10; i++)
    {
        std::cout << arr[i] << " ";
    }
    removeElementFromArr(arr, size, number);
    std::cout << "\nArray after removing " << number << ": ";
    for (int i = 0; i < size; i++)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
    delete[] arr;
    return 0;
}
