#include <iostream>

using std::cin;
using std::cout;
using std::endl;

const int MAX_SIZE = 100;

bool isMirror(int arr[], int length)
{
    for (int i = 0; i <= length / 2; ++i)
    {
        if (arr[i] != arr[length - i - 1])
        {
            return false;
        }
    }
    return true;
}

void arrayOutput(int arr[], int length)
{
    for (int i = 0; i <= length - 1; ++i)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int length;
    int arr[MAX_SIZE];

    cout << "Length: ";
    cin >> length;

    for (int i = 0; i <= length - 1; ++i)
    {
        cout << "arr[" << i << "] = ";
        cin >> arr[i];
    }

    cout << "Your array is: ";
    arrayOutput(arr, length);
    cout << endl;
    cout << "Mirror -> " << std::boolalpha << isMirror(arr, length);

    return 0;
}