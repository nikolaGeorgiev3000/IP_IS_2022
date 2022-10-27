#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main()
{
    int entryNumber; // Without loss of generality, we accept that the user will enter an eight digit numb

    cout << "Enter an eight digit number: ";
    cin >> entryNumber;

    if (entryNumber < 0)
    {
        return 0; // Program ends here, the number must be positive
    }

    int year, month, days;
    bool isValid = false; // to validate a date

    year = entryNumber % 10000; // Extracting the year
    entryNumber /= 10000;

    month = entryNumber % 100; // Extracting the month
    entryNumber /= 100;

    days = entryNumber; // The rest is for the days

    if (days > 31) // First checking if days are invalid
    {
        // All of the following in this if-block is to print out 0x, if x is from 1 to 9, for better look
        if (days < 10)
        {
            cout << "0" << days;
        }
        else
        {
            cout << days;
        }
        cout << "/";
        if (month < 10)
        {
            cout << "0" << month;
        }
        else
        {
            cout << month;
        }
        cout << "/";
        cout << year << " is not valid!";
        return 0; // No need to continue
    }

    bool isLeapYear = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
    bool isEvenMonth = (month % 2 == 0);
    bool isValidMonth = (month >= 1) && (month <= 12);
    bool isFebruary = (month == 2);
    bool isValidDaysInEvenMonth = (days >= 1) && (days <= 30);
    bool isValidDaysInOddMonth = (days >= 1) && (days <= 31);

    if (isLeapYear)
    { // an if only for a leapYear case
        if (isValidMonth)
        {
            if (isFebruary)
            {
                bool isLeapYearFebruaryDays = (days >= 1) && (days <= 29);
                if (isLeapYearFebruaryDays)
                {
                    isValid = true;
                }
                else
                {
                    isValid = false;
                }
            }
            else if (isEvenMonth)
            {
                if (isValidDaysInEvenMonth)
                {
                    isValid = true;
                }
                else
                {
                    isValid = false;
                }
            }
            else
            { // Now we are in the odd months section
                if (isValidDaysInOddMonth)
                {
                    isValid = true;
                }
                else
                {
                    isValid = false;
                }
            }
        }
    }
    else
    { // Not a leapYear
        if (isValidMonth)
        {
            if (isFebruary)
            {
                bool isNotLeapYearFebruaryDays = (days >= 1) && (days <= 28); // Valid Days in February on
                // a non-leap Year
                if (isNotLeapYearFebruaryDays)
                {
                    isValid = true;
                }
                else
                {
                    isValid = false;
                }
            }
            else if (isEvenMonth)
            {
                if (isValidDaysInEvenMonth)
                {
                    isValid = true;
                }
                else
                {
                    isValid = false;
                }
            }
            else
            {
                if (isValidDaysInOddMonth)
                {
                    isValid = true;
                }
                else
                {
                    isValid = false;
                }
            }
        }
    }
    if (isValid)
    {
        if (days < 10)
        {
            cout << "0" << days;
        }
        else
        {
            cout << days;
        }
        cout << "/";
        if (month < 10)
        {
            cout << "0" << month;
        }
        else
        {
            cout << month;
        }
        cout << "/";
        cout << year << " is valid!";
    }
    else
    {
        if (days < 10)
        {
            cout << "0" << days;
        }
        else
        {
            cout << days;
        }
        cout << "/";
        if (month < 10)
        {
            cout << "0" << month;
        }
        else
        {
            cout << month;
        }
        cout << "/";
        cout << year << " is not valid!";
    }
    return 0;
}
