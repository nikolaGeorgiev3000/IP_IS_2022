#include <iostream>
#include <cmath>
using std::cin;
using std::cout;
using std::endl;

int main()
{
    float a, b, c; // Let's say the coefficients are integers, we avoid having to cast
    float x1, x2;  // We could get real numbers as solutions
    cout << "Enter a, b and c, sequentially: \n";
    cin >> a >> b >> c;
    float discriminant = b * b - 4 * a * c;

    if (a == 0) // If true, we enter a linearEquation case
    {
        if (b == 0)
        {
            if (c == 0)
            {
                cout << "Any x is a solution.";
            }
            else
            {
                cout << "No solution."; // we get contradiction numberDiffFromZero = 0
            }
        }
        else // b != 0 -> bx + c = 0, all depends on c now, but no need for cases
        {
            cout << "The solution is: " << -(c) / b;
        }
        return 0; // No need for the program to keep on going
    }

    if (discriminant > 0)
    {
        x1 = (-b + sqrt(discriminant)) / (2 * a);
        x2 = (-b - sqrt(discriminant)) / (2 * a);
        cout << "Roots are real and different: " << endl;
        cout << "x1 = " << x1 << endl;
        cout << "x2 = " << x2 << endl;
    }
    else if (discriminant == 0)
    {
        x1 = (-b) / 2 * a;
        cout << "Roots are the same." << endl;
        cout << "x1 = x2 = " << x1 << endl;
    }
    else // If we want to be 100% correct, we have to include complex numbers as solutions here
    {
        cout << "No real solutions.";
    }
    return 0;
}