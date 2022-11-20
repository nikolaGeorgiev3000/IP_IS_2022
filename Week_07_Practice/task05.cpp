#include <iostream>

using std::cin;
using std::cout;
using std::endl;

const int MAX_SIZE = 1000;

short stringLength(char randomArr[])
{
    int i = 0;
    short lengthCounter = 0;

    while (randomArr[i])
    {
        ++lengthCounter;
        ++i;
    }
    return lengthCounter;
}

bool isPalindrome(char arr[], int n)
{
    for (int i = 0; i < (n / 2); ++i)
    {
        if (arr[i] != arr[n - i - 1])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    char arr[MAX_SIZE];

    cin.getline(arr, MAX_SIZE);

    short length = stringLength(arr);
    cout << endl;
    cout << "Palindrome: " << std::boolalpha << isPalindrome(arr, length);

    return 0;
}