// numbers on an even position
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

const int MAX_SIZE = 100;

void outputEvenPosNum(int arr[], int n)
{
    cout << "Numbers on even pos in your array are: \n";
    cout << "[";
    for (int i = 0; i <= n - 1; i += 2)
    {
        cout << arr[i];
        if (n % 2 == 0 && i == n - 2)
            continue; // skipping the last unnecessary comma
        if (i < n - 1)
            cout << ", ";
    }
    cout << "]";
}
int main()
{
    int arr[MAX_SIZE];
    int n;
    cout << "Enter n [0 < n <= 100]: ";
    cin >> n;
    if (n <= 0 || n > 100)
    {
        cout << "Invalid input.";
        return 0;
    }

    // array input
    for (int i = 0; i <= n - 1; ++i)
    {
        cout << "arr[" << i << "] = ";
        cin >> arr[i];
    }

    cout << endl;

    outputEvenPosNum(arr, n);

    return 0;
}