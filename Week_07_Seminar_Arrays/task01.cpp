#include <iostream>

using std::cin;
using std::cout;
using std::endl;

const int MAX_SIZE = 100;

void arrayRevOutput(int arr[], int n)
{
    cout << "The reversed array is: \n";
    cout << "[";
    for (int i = n - 1; i >= 0; --i)
    {
        cout << arr[i];
        if (i > 0) // comma validation assuming the array is not empty
            cout << ", ";
    }
    cout << "]";
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

    // Rev output

    arrayRevOutput(arr, n);

    return 0;
}