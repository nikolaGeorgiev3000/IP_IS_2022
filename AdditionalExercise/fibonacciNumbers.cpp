#include <iostream>

using namespace std;

int main()
{
    int firstTerm = 1, secondTerm = 1, nextTerm, n;
    cout << "Enter n-th fibonacci number: ";
    cin >> n;
    if (n == 1 || n == 2)
    {
        cout << "The " << n << "-th fibonacci number is: " << n << endl;
    }
    for (int i = 3; i <= n; i++) // Starting from i = 3, because the first two
    // members are pre-defined
    {
        nextTerm = firstTerm + secondTerm;
        firstTerm = secondTerm;
        secondTerm = nextTerm;
    }
    cout << "The " << n << "-th fibonacci number is: " << nextTerm << endl;
    return 0;
}