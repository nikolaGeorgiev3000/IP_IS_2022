#include <iostream>

using std::cin;
using std::cout;
using std::endl;

const int MAX_SIZE = 100;

int minEl(int arr[], int n)
{
    int minElement = INT_MAX;
    for (int i = 0; i <= n - 1; ++i)
    {
        if (minElement > arr[i])
        {
            minElement = arr[i];
        }
    }
    return minElement;
}

int maxEl(int arr[], int n)
{
    int maxElement = INT_MIN;
    for (int i = 0; i <= n - 1; ++i)
    {
        if (maxElement < arr[i])
        {
            maxElement = arr[i];
        }
    }
    return maxElement;
}

int secondMinElement(int arr[], int n, int minElement)
{
    int secondMinElement = INT_MAX;

    for (int i = 0; i <= n - 1; ++i)
    {
        // if (arr[i] == minElement)    // replacement for the second condition in the next if-statement
        //     continue;
        if (secondMinElement > arr[i] && arr[i] != minElement)
        {
            secondMinElement = arr[i];
        }
    }
    return secondMinElement;
}

int secondMaxElement(int arr[], int n, int maxElement)
{
    int secondMaxElement = INT_MIN;

    for (int i = 0; i <= n - 1; ++i)
    {
        // if (arr[i] == maxElement)    // replacement for the second condition in the next if-statement
        //     continue;
        if (secondMaxElement < arr[i] && arr[i] != maxElement)
        {
            secondMaxElement = arr[i];
        }
    }
    return secondMaxElement;
}
int main()
{
    int n;
    int arr[MAX_SIZE];

    cout << "Length: ";
    cin >> n;

    for (int i = 0; i <= n - 1; ++i)
    {
        cout << "arr[" << i << "] = ";
        cin >> arr[i];
    }

    cout << endl;

    int maxElement = maxEl(arr, n);
    int minElement = minEl(arr, n);

    cout << "Min = " << minElement << endl;
    cout << "Max = " << maxElement << endl;
    cout << "Second Min = " << secondMinElement(arr, n, minElement) << endl;
    cout << "Second Max = " << secondMaxElement(arr, n, maxElement) << endl;

    return 0;
}