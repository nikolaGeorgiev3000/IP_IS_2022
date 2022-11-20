#include <iostream>

using std::cin;
using std::cout;
using std::endl;

const int MAX_SIZE = 100;

void sortIncreasingOrder(int arr[], int n)
{
    int temp;
    for (int i = 0; i <= n - 1; ++i)
    {
        for (int j = i + 1; j <= n - 1; ++j)
        {
            if (arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    cout << "Sorted array: [";
    for (int i = 0; i <= n - 1; ++i)
    {
        cout << arr[i];
        if (i < n - 1)
            cout << ", ";
    }
    cout << "]";
}
int main()
{
    int size, arr[MAX_SIZE];
    cout << "Size [0 < n <= 100]: ";
    cin >> size;

    if (size <= 0 || size > 100)
    {
        cout << "invalid input. \n";
        return 0;
    }

    for (int i = 0; i <= size - 1; ++i)
    {
        cout << "arr[" << i << "] = ";
        cin >> arr[i];
    }

    cout << endl;

    sortIncreasingOrder(arr, size);
    return 0;
}