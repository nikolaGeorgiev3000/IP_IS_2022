#include <iostream>

using std::cin;
using std::cout;
using std::endl;

// Declaring functions in order to avoid issues with calling them inside others

int abs();
double pow();
int min();
int max();
int minOfThree();
int maxOfThree();
bool isUpper();
bool isLower();
bool isLetter();
bool isDigit();
char toUpper();
char toLower();

// Defining the functions

int abs(int n)
{
    return (n >= 0) ? n : (-1) * n;
}

double pow(double base, int power)
{
    double powered = 1.0;
    for (int i = 1; i <= power; ++i)
    {
        powered *= base;
    }
    return powered;
}

int min(int a, int b)
{
    return (a > b) ? b : a;
}

int max(int a, int b)
{
    return (a > b) ? a : b;
}

int minOfThree(int a, int b, int c)
{
    return min(min(a, b), c);
}

int maxOfThree(int a, int b, int c)
{
    return max(max(a, b), c);
}

bool isUpper(char s)
{
    return (s >= 'A' && s <= 'Z');
}

bool isLower(char s)
{
    return (s >= 'a' && s <= 'z');
}

bool isLetter(char s)
{
    return (isLower(s) || isUpper(s)); // if it is a letter, it must be either lower or upper
}

bool isDigit(char s)
{
    return (s >= '0' && s <= '9');
}

char toUpper(char letter)
{
    if (isLower(letter))
    {
        return letter - ('a' - 'A'); // the diff is the same for all letters
    }
    cout << "Your input is invalid -> ";
    return letter;
}

char toLower(char letter)
{
    if (isUpper(letter))
    {
        return letter + ('a' - 'A');
    }
    cout << "Your input is invalid -> ";
    return letter;
}

int main()
{
    cout << abs(-5) << endl;
    cout << pow(5.5, 3) << endl;
    cout << min(5, 3) << endl;
    cout << max(-2, 2) << endl;
    cout << maxOfThree(3, 5, -2) << endl;
    cout << minOfThree(3, -6, 2) << endl;
    cout << isUpper('b') << endl;
    cout << isLower('+') << endl;
    cout << isLetter('g') << endl;
    cout << isDigit('5') << endl;
    cout << toUpper('A') << endl;
    cout << toLower('B') << endl;
    return 0;
}