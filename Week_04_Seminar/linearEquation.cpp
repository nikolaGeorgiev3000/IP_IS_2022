#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main()
{
    float a, b; // using float in order to avoid casting or division mistakes
    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;
    if (a == 0)
    {
        if (b == 0)
        {
            cout << "Any x is a solution.";
            return 0; // Both this and the next return are used to avoid using else on the bigger if
        }
        else
        {
            cout << "There are no solutions.";
            return 0;
        }
    }
    cout << "The solution is: " << -(b) / a; // if b is 0, it prints -0, which can simply
    // be interpreted as 0
    return 0;
}