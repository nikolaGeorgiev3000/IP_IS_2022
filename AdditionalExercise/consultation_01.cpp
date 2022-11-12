// Задача: Напишете функция, която приема естествено число и връща ново число, което има същите цифри, но в сортиран вид.
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int countDigitOcc();
int concatAtBack();
int sortNumbers();

int countDigitOcc(int n, int digit)
{
    int counter = 0;
    while (n != 0)
    {
        if (digit == n % 10)
        {
            counter++;
        }
        n /= 10;
    }
    return counter;
}

int concatAtBack(int n, int digit, int howManyTimesDigitInNumber)
{
    for (int i = 0; i < howManyTimesDigitInNumber; ++i)
    {
        (n *= 10) += digit;
    }
    return n;
}

int sortNumber(int n)
{
    int result = 0;
    for (int i = 1; i <= 9; ++i)
    {
        int currentDigitOcc = countDigitOcc(n, i);
        result = concatAtBack(result, i, currentDigitOcc);
    }
    return result;
}
int main()
{
    int n;
    cout << "Enter a natural number: \n";

    do
    {
        cin >> n;
        if (n < 1)
        {
            cout << "Invalid input. \n";
        }
    } while (n < 1);

    cout << "The sorted number is: " << sortNumber(n) << endl;

    return 0;
}