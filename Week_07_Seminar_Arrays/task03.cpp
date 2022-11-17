#include <iostream>

using std::cin;
using std::cout;
using std::endl;

const int MAX_SIZE = 100;

void numberOccurences(int arr[], int length, int number)
{
    short counter = 0;
    bool positions[MAX_SIZE];

    for (int i = 0; i <= length - 1; ++i)
    {
        if (number == arr[i])
        {
            ++counter;
            positions[i] = true;
        }
        else
        {
            positions[i] = false;
        }
    }

    cout << "Occurences: " << counter << endl;
    cout << "Boolean array of Positions: [";
    for (int i = 0; i <= length - 1; ++i)
    {
        cout << positions[i];
        if (i < length - 1) // comma validation
            cout << ", ";
    }
    cout << "]" << endl;
}

int main()
{
    int length;
    int arr[MAX_SIZE];
    int checkNumber;

    cout << "Length: ";
    cin >> length;
    cout << "Number: ";
    cin >> checkNumber;

    // arr input
    for (int i = 0; i <= length - 1; ++i)
    {
        cout << "arr[" << i << "] = ";
        cin >> arr[i];
    }
    cout << endl;

    numberOccurences(arr, length, checkNumber);

    return 0;
}