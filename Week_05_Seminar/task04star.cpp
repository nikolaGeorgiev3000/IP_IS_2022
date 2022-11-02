// all prime numbers less than 100
#include <iostream>

using namespace std;

int main()
{
    for (int i = 2; i < 100; i++) // the range we want to check
    {
        bool flag = true;                // raised the flag
        for (int j = 2; j * j <= i; j++) // this loop's condition skips numbers 2 and 3, and continues as with the previous program where we had i < number / 2
        {
            if (i % j == 0) // if true, we found a divisor
            {
                flag = false; // the flag is down, we don't have a prime number
                break;
            }
        }
        if (flag) // if flag stays true, we didn't find any "middle" divisors, so we print out a prime number
        {
            cout << i << "\t"; // with tabulation, for clarity
        }
    }

    return 0;
}