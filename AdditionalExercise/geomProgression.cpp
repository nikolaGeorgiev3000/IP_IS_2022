#include <iostream>

using namespace std;

int main()
{
    int n, sum = 0, sumationTerm = 1, term; // term = a, sumationTerm = term^0
    cout << "Enter number of collectables: ";
    cin >> n;
    cout << "Enter the term: ";
    cin >> term;
    for (int i = 1; i <= n; i++)
    {
        sum += sumationTerm;
        sumationTerm *= term; // a * a, a * a * a, etc...
    }
    cout << "The sum is of the geom. progression is: " << sum << "\n";
    return 0;
}