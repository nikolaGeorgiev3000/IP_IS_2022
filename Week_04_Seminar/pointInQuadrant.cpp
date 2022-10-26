#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main()
{
    float x, y; // The points could be real numbers
    cout << "Enter x: ";
    cin >> x;
    cout << "Enter y: ";
    cin >> y;

    if (x == 0 && y == 0)
    {
        cout << "The point (" << x << ", " << y << ") is the starting point";
    }
    else if (x == 0)
    {
        cout << "The point (" << x << ", " << y << ") is on the y-axis";
    }
    else if (y == 0)
    {
        cout << "The point (" << x << ", " << y << ") is on the x-axis";
    }
    else if (x > 0 && y > 0)
    {
        cout << "The point (" << x << ", " << y << ") is in the First Quadrant.";
    }
    else if (x < 0 && y > 0)
    {
        cout << "The point (" << x << ", " << y << ") is in the Second Quadrant.";
    }
    else if (x < 0 && y < 0)
    {
        cout << "The point (" << x << ", " << y << ") is in the Third Quadrant.";
    }
    else
    {
        cout << "The point (" << x << ", " << y << ") is in the Fourth Quadrant.";
    }
    return 0;
}