// Задача: Да се напише функция, която приема две естествени числа и връща ново число, което е тяхната конкатенация.
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int concatAtBack();
int reverse();
int concatTwoNumbers();

int concatAtBack(int n, int digit)
{
    return n * 10 + digit;
}

int reverse(int n)
{
    int reversed = 0;
    while (n != 0)
    {
        (reversed *= 10) += n % 10;
        n /= 10;
    }
    return reversed;
}

int concatTwoNumbers(int a, int b)
{
    int reversedSecondNumber = reverse(b);
    int result = a; // using the first number for free

    while (reversedSecondNumber != 0)
    {
        result = concatAtBack(result, reversedSecondNumber % 10); // no need for variable lastDigit...
        reversedSecondNumber /= 10;
    }
    return result;
}

int main()
{
    int a, b;
    cout << "Enter two positive integer numbers: \n";
    do
    {
        cin >> a >> b;
        if (a <= 1 || b <= 1)
        {
            cout << "Invalid input. Try again. \n";
        }
    } while (a <= 1 || b <= 1);

    cout << "The concatenated number is: " << concatTwoNumbers(a, b) << endl;
    return 0;
}