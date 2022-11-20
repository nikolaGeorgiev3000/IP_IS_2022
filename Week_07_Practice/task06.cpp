#include <iostream>

using std::cin;
using std::cout;
using std::endl;

const int MAX_SIZE = 1000;

void integerScaledArray(int arr[], int n, int scalar)
{
    for (int i = 0; i <= n - 1; ++i)
    {
        arr[i] *= scalar;
    }

    cout << "Integer scaled array: [";
    for (int i = 0; i <= n - 1; ++i)
    {
        cout << arr[i];
        if (i < n - 1)
            cout << ", ";
    }
    cout << "]";
}

void realScaledArray(double arr[], int n, double scalar)
{
    for (int i = 0; i <= n - 1; ++i)
    {
        arr[i] *= scalar;
        if (arr[i] == 0)
        {
            arr[i] *= (-1);
        }
    }

    cout << "Real scaled array: [";
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
    int arr1[MAX_SIZE];
    double arr2[MAX_SIZE];
    int n, scalar1;
    double scalar2;

    cout << "Enter n [0 < n <= 100]: ";
    cin >> n;

    if (n <= 0 || n > 100)
    {
        cout << "Invalid input.";
        return 0;
    }

    cout << "Integer scalar: ";
    cin >> scalar1;
    cout << "Real scalar: ";
    cin >> scalar2;
    cout << endl;

    // Array_01
    cout << "Array of type int: \n";
    for (int i = 0; i <= n - 1; ++i)
    {
        cout << "arr[" << i << "] = ";
        cin >> arr1[i];
    }

    cout << endl;

    // Array_02
    cout << "Array of type double: \n";
    for (int i = 0; i <= n - 1; ++i)
    {
        cout << "arr[" << i << "] = ";
        cin >> arr2[i];
    }

    integerScaledArray(arr1, n, scalar1);
    cout << endl;
    realScaledArray(arr2, n, scalar2);
    return 0;
}