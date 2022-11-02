#include <iostream>

using namespace std;

int main()
{
    int number, fact = 1;
    cout << "Enter a number: ";
    cin >> number;
    for (int i = 1; i <= number; i++)
    {
        fact *= i;
    }
    cout << number << " factoriel is: " << fact << endl;

    return 0;
}