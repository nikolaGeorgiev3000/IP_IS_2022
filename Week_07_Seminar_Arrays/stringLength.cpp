#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int stringLength(char randomArr[])
{
    int i = 0;
    int lengthCounter = 0;

    while (randomArr[i])
    {
        ++lengthCounter;
        ++i;
    }
    return lengthCounter;
}

int main()
{
    char randomArr1[] = {'a', 'b', '\0'}; // always put terminating '\0' in that way of input
    char randomArr2[] = "ab";             // no need for term. zero here

    cout << stringLength(randomArr1) << endl;
    cout << stringLength(randomArr2) << endl;

    return 0;
}