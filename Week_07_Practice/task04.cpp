// stringLengthCustFunc
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

const int MAX_SIZE = 100;

int stringLength(char randomArr[])
{
    int i = 0;
    int lengthCounter = 0;

    while (randomArr[i])
    {
        ++lengthCounter;
        ++i;
    }
    return lengthCounter - 1; // without the '/0', a bit stupid, because in our case the '\0' is on index 99
}

int main()
{
    char arr[MAX_SIZE];

    cin.getline(arr, MAX_SIZE);

    cout << endl;

    cout << "The length of your string is: " << stringLength(arr);

    return 0;
}