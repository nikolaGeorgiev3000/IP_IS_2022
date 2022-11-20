#include <iostream>

using std::cin;
using std::cout;
using std::endl;

const int MAX_SIZE = 1000;

void arrayRev(int arr[], int n)
{
    cout << "The rev array is: [";
    for (int i = n - 1; i >= 0; --i)
    {
        cout << arr[i];
        if (i > 0)
            cout << ", ";
    }
    cout << "]";
}

int main()
{
    int arr[MAX_SIZE], n;

    cout << "Enter n [0 < n <= 100]: ";
    cin >> n;

    if (n <= 0 || n > 100)
    {
        cout << "Invalid input.";
        return 0;
    }

    for (int i = 0; i <= n - 1; ++i)
    {
        cout << "arr[" << i << "] = ";
        cin >> arr[i];
    }

    cout << endl;
    arrayRev(arr, n);
    return 0;
}