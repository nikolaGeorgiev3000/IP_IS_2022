#include <iostream>

using std::cin;
using std::cout;
using std::endl;

const int MAX_SIZE = 100;

void insertionSort(int arr[], int n)
{
    int temp, j;
    for (int i = 1; i < n; ++i)
    {
        temp = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > temp)
        {
            arr[j + 1] = arr[j];
            --j;
        }
        arr[j + 1] = temp;
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
    int n, arr[MAX_SIZE];
    cout << "Enter n: ";
    cin >> n;

    for (int i = 0; i <= n - 1; ++i)
    {
        cin >> arr[i];
    }

    cout << endl;

    insertionSort(arr, n);
    return 0;
}