// even numbers of an array
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

const int MAX_SIZE = 100;

void outputEvenArrayNumbers(int arr[], int n)
{
    cout << "The even numbers of your array are: \n";
    cout << "[ ";
    for (int i = 0; i <= n - 1; ++i)
    {
        if (arr[i] % 2 == 0)
        {
            cout << arr[i] << " ";
        }
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

    outputEvenArrayNumbers(arr, n);

    return 0;
}