// number bigger than its neighbours
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

const int MAX_SIZE = 100;

short numbersBiggerThanNeighbrs(int arr[], int n)
{
    short counter = 0;
    int first = arr[0];
    int middle = arr[1];
    for (int i = 2; i <= n - 1; ++i)
    {
        if (middle > first && middle > arr[i]) // arr[i] === third || next
        {
            ++counter;
        }
        first = middle;
        middle = arr[i];
    }
    return counter;
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
    short numBigThanNeighbrs = numbersBiggerThanNeighbrs(arr, n);
    cout << "Solution: " << numBigThanNeighbrs;

    return 0;
}