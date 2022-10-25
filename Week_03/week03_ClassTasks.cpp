#include <iostream>
#include <cmath>
using std::cin;
using std::cout;
using std::endl;

int main()
{
    // Task_01
    /*   int firstNumber, secondNumber;
        cout << "Enter the first number: ";
        cin >> firstNumber;
        cout << "Enter the second number: ";
        cin >> secondNumber;

        // With if-statement
        if (firstNumber > secondNumber)
        {
            cout << "The bigger number is: " << firstNumber << "\n";
        }
        else
        {
            cout << "The bigger number is: " << secondNumber << "\n";
        }

        // With ternary operator
        int biggerNumber = (firstNumber > secondNumber) ? firstNumber : secondNumber;
        cout << "The bigger number is: " << biggerNumber << endl;
    */
    // Task_02
    /*   int month;
        cout << "Enter a valid month: ";
        cin >> month;

        // With if-statement
        if (month < 1 || month > 12)
        {
            cout << "NO." << endl;
        }
        else
        {
            cout << "YES." << endl;
        }


        // With ternary operator
        bool validMonth = (month >= 1 && month <= 12) ? true : false;
        cout << std::boolalpha << "Valid month -> " << validMonth << endl;
    */
    // Task_03
    /*    int x, a, b;
        cout << "Enter open interval (a , b):\n";
        cin >> a;
        cin >> b;
        if (a >= b)
        {
            cout << "Enter a valid interval.";
        }
        else
        {
            cout << "Enter x: ";
            cin >> x;
            // With if-statement
            if (x <= a || x >= b)
            {
                cout << "NO." << endl;
            }
            else
            {
                cout << "Yes." << endl;
            }

            // With ternary operator
            bool xInside = (x > a && x < b) ? true : false;
            cout << "x is inside the open interval: " << std::boolalpha << xInside << endl;
        }
    */
    // Task_04
    /* char symbol;
    cout << "Enter a symbol: ";
    cin >> symbol;

    // With if-statement
    if ((symbol < 'A') || ((symbol > 'Z') && (symbol < 'a')) || (symbol > 'z'))
    {
        cout << "Not a letter." << endl;
    }
    else
    {
        cout << "This is a letter." << endl;
    }

    // With ternary operator
    bool isLetter = ((symbol >= 'A') && (symbol <= 'Z')) || ((symbol >= 'a') && (symbol <= 'z')) ? true : false;
    cout << "This is a letter: " << std::boolalpha << isLetter << endl;
    */

    // Task_05
    /*  int a, b;
        cout << "First Number: ";
        cin >> a;
        cout << "Second number: ";
        cin >> b;
        if ((a > 0) && (b > 0))
        {
            cout << "Both are positive.";
        }
        else if (a > 0 || b > 0) // The first if is "broken", so at least one of its conditions is not true
        {
            cout << "Only one is positive.";
        }
        else
        {
            cout << "Nothing is positive";
        }
    */

    // Task_06
    /*  int month;
        cout << "Enter a month: ";
        cin >> month;
        switch (month)
        {
        case 1:
            cout << "January.";
            break;
        case 2:
            cout << "February.";
            break;
        case 3:
            cout << "March.";
            break;
        case 4:
            cout << "April.";
            break;
        case 5:
            cout << "May";
            break;
        case 6:
            cout << "June.";
            break;
        case 7:
            cout << "July.";
            break;
        case 8:
            cout << "August.";
            break;
        case 9:
            cout << "September.";
            break;
        case 10:
            cout << "October.";
            break;
        case 11:
            cout << "November.";
            break;
        case 12:
            cout << "December.";
            break;
        default:
            cout << "Not a valid month.";
        }
    */

    // Task_07
    /*  int n, m, k;
        cout << "Enter n:";
        cin >> n;
        cout << "Enter m:";
        cin >> m;
        cout << "Enter k - blocks:";
        cin >> k;

        // With if-statement
        if ((k % m == 0) && (k < n * m))
        {
            cout << "Yes, you can.\n";
        }
        else
        {
            cout << "No you can't.\n";
        }

        // With ternary operator
        bool canSnapOffChoc = ((k % m == 0) && (k < n * m)) ? true : false;
        cout << std::boolalpha << "You can snap off " << k << " blocks: " << canSnapOffChoc << endl;
    */

    // Task_08
    /*    int a, b, c; // Let's say the coefficients are integers
        float x1, x2; // We could get real numbers as solutions
        cout << "Enter a, b, c: \n";
        cin >> a >> b >> c;
        int discriminant = b * b - 4 * a * c;
        if (a == 0) // Let's accept that a != 0, since we want to have a quadratic equation
        {
            cout << "Enter a!=0. Try again";
        }
        else
        {
            if (discriminant > 0)
            {
                x1 = (-b + sqrt(discriminant)) / 2 * a;
                x2 = (-b - sqrt(discriminant)) / 2 * a;
                cout << "Roots are different: " << endl;
                cout << "x1 = " << x1 << endl;
                cout << "x2 = " << x2 << endl;
            }
            else if (discriminant == 0)
            {
                x1 = (-b) / 2 * a;
                cout << "Roots are the same." << endl;
                cout << "x1 = x2 = " << x1 << endl;
            }
            else
            {
                cout << "No real solutions.";
            }
        }
    */

    // Task_09 -> We make a currency calculator, working with the following currencies: BGN ('B'), EUR ('E') and USD ('U')
    /*  double sum;
        char fromCurrency, toCurrency;
        cout << "Enter a sum: ";
        cin >> sum;
        cout << "Enter current currency (Options: 'B', 'U', 'E' (without quotes)): ";
        cin >> fromCurrency;
        cout << "Enter TO currency (Options: 'B', 'U', 'E' (without quotes)): ";
        cin >> toCurrency;
        switch (fromCurrency)
        {
        case 'B':
            switch (toCurrency)
            {
            case 'E':
                sum /= 1.956;
                cout << "From BGN to EUR, your sum is: " << sum << " euros." << endl;
                break;
            case 'U':
                sum /= 1.99967;
                cout << "From BGN to USD, your sum is: " << sum << " dollars." << endl;
                break;
            default:
                cout << "Enter a valid currency letter." << endl;
            }
            break;
        case 'U':
            switch (toCurrency)
            {
            case 'B':
                sum *= 1.99967;
                cout << "From USD to BGN, your sum is: " << sum << " BGN." << endl;
                break;

            case 'E':
                sum *= 1.02241;
                cout << "From USD to EUR, your sum is: " << sum << " EUR." << endl;
                break;
            default:
                cout << "Enter a valid currency letter." << endl;
            }
            break;
        case 'E':
            switch (toCurrency)
            {
            case 'B':
                sum *= 1.956;
                cout << "From EUR to BGN, your sum is: " << sum << " BGN." << endl;
                break;
            case 'U':
                sum /= 1.02241;
                cout << "From EUR to USD, your sum is: " << sum << " USD." << endl;
                break;
            default:
                cout << "Enter a valid currency letter." << endl;
            }
            break;
        default:
            cout << "Enter a valid currency letter." << endl;
        }
    */

    // Task_10 -> Tishko is a daily drinker
    /*    bool beer, rakia, ice;
        cout << "Enter values accordingly -> beer -> rakia -> ice (Important: '0' for false, and '1' for true, without quotes): \n";
        cin >> beer >> rakia >> ice;
        if (((beer != 0) && (beer != 1)) || ((rakia != 0) && (rakia != 1)) || ((ice != 0) && (ice != 1))) // Compiler not behaving
        // in the right way here. When entered 0 1 a, for every a != 0 AND 1, if should be (F || F || T), so we should be in the 'if'
        {
            cout << "Enter valid bool values." << endl;
        }
        else
        {
            if (beer) // The bool values for rakia and ice do not matter here, if beer is true, then Traicho drinks beer
            {
                cout << "Drinks beer.";
            }
            else if (rakia && ice) // These two go hand-in-hand, so we connect them with conjunction
            {
                cout << "Drinks rakia at home, with ice.";
            }
            else // situations like 0 1 0, or 0 0 1, or 0 0 0 'force' Traicho to buy beer from the shop
            {
                cout << "Buys cold beer.";
            }
        }
        */

    // Task_11 -> probably understood the conditions for the task wrong...
    /*  int distance;
        cout << "Enter the distance needed: ";
        cin >> distance;
        if (distance < 0)
        {
            cout << "Invalid distance ( distance >= 0)." << endl;
        }
        else
        {
            cout << "Tishko will walk " << distance * (distance + 1) << " metres." << endl;
        }
        */
    return 0;
}