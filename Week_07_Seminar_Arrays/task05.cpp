// non-decreasing digits of a number is what makes a number interesting for Trai4o...

#include <iostream>
#include <iomanip>

using std::cin;
using std::cout;
using std::endl;

const unsigned int MAX_SIZE = 100;

void nonDecreasing(unsigned arr[], int n)
{
    bool solutionArray[MAX_SIZE];

    for (int i = 0; i <= n - 1; ++i)
    {
        bool flag = true;
        while (arr[i] != 0)
        {
            short prevDigit = arr[i] % 10; // prevDigit === lastDigit
            arr[i] /= 10;
            if (prevDigit < arr[i] % 10) // lastDigit should be >= nextDigit
            {
                flag = false;
            }
        }
        solutionArray[i] = (flag) ? true : false;
    }

    cout << "[";
    for (int i = 0; i <= n - 1; ++i)
    {
        cout << std::setw(10) << std::boolalpha << solutionArray[i];
        if (i < n - 1)
            cout << ", ";
    }
    cout << "]";
}

void arrayOutput(unsigned arr[], int n)
{
    cout << "[";
    for (int i = 0; i <= n - 1; ++i)
    {
        cout << std::setw(10) << arr[i];
        if (i < n - 1)
            cout << ", ";
    }
    cout << "]" << endl;
}

int main()
{
    short n;
    unsigned int arr[MAX_SIZE];
    cout << "Enter n: ";
    cin >> n;

    for (int i = 0; i <= n - 1; ++i)
    {
        cin >> arr[i];
    }

    cout << "Array of your numbers: ";
    arrayOutput(arr, n);

    cout << "Array of the solution: ";
    nonDecreasing(arr, n);

    return 0;
}
