#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    for (int i = 1; i * i <= n; i++)
    {
        cout << i * i << " ";
    }
    return 0;
}