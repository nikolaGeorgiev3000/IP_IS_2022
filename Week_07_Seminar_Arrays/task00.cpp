#include <iostream>

using std::cin;
using std::cout;
using std::endl;

const int MAX_SIZE = 100;

void arrayOutput(double arr[], int n)
{
    cout << "[";
    for (int i = 0; i <= n - 1; ++i)
    {
        cout << arr[i];
        if (i < n - 1) // comma validation assuming the array is not empty
            cout << ", ";
    }
    cout << "]";
}

double average(double arr[], int n)
{
    double sum = 0;
    for (int i = 0; i <= n - 1; ++i)
    {
        sum += arr[i];
    }
    return (sum / n);
}

int main()
{
    int n;
    double realArr[MAX_SIZE];

    cout << "Length: ";
    cin >> n;

    // array input
    for (int i = 0; i <= n - 1; ++i)
    {
        cout << "arr[" << i << "] = ";
        cin >> realArr[i];
    }

    cout << endl;

    arrayOutput(realArr, n);
    cout << endl;

    cout << "Average: " << average(realArr, n);

    return 0;
}