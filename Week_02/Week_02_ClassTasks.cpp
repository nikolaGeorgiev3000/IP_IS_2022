#include <iostream>
#include <cmath>
using std::cin;
using std::cout;
using std::endl;

int main()
{
    // TASK 1

    /* int apples, pears, bananas;
    cout << "Enter the number of apples: ";
    cin >> apples;
    cout << "Enter the number of pears: ";
    cin >> pears;
    cout << "Enter the number of bananas: ";
    cin >> bananas;
    cout << "Traicho, don't forget to buy " << apples << " apples, "
         << pears << " pears and " << bananas << " bananas."; */

    // TASK 2

    /* int firstNumber, secondNumber;
    cout << "Enter the firstNumber: ";
    cin >> firstNumber;
    cout << "Enter the secondNumber: ";
    cin >> secondNumber;
    int sum = firstNumber + secondNumber;
    int diff = firstNumber - secondNumber;
    int product = firstNumber * secondNumber;
    cout << "Sum: " << sum << "\n";
    cout << "Difference: " << diff << "\n";
    cout << "Product: " << product << "\n"; */

    // TASK 3

    /* int days, hours, mins, seconds;
    cout << "Enter seconds: ";
    cin >> seconds;
    days = seconds / 86400;
    hours = (seconds % 86400) / 3600;
    mins = ((seconds % 86400) % 3600) / 60;
    seconds = ((seconds % 86400) % 3600) % 60;

    cout << days << " days, " << hours << " hours, "
         << mins << " minutes and " << seconds << " seconds"; */

    // TASK 4

    /* int number, firstDigit, secondDigit, thirdDigit;
    cout << "Enter a number: ";
    cin >> number;
    firstDigit = number / 100;
    secondDigit = (number / 10) % 10;
    thirdDigit = number % 10;
    cout << "The rev number is: " << thirdDigit << secondDigit << firstDigit;
    return 0; */

    // TASK 5

    /* float squareSide, apothem, height;
    cout << "Enter squareSide: ";
    cin >> squareSide;
    cout << "Enter height: ";
    cin >> height;
    cout << "Enter apothem: ";
    cin >> apothem;
    float basePer = 4 * squareSide;
    float surrSurface = basePer * apothem / 2;
    float baseArea = squareSide * squareSide;
    float mainArea = surrSurface + baseArea;
    float pyramidVolume = (1.0 / 3.0) * (baseArea / height);
    cout << "Volume: " << pyramidVolume << ", Main Area: " << mainArea; */

    // TASK 6

    /* int x1, y1, x2, y2, r1, r2;
    cout << "x1 = ";
    cin >> x1;
    cout << "y1 = ";
    cin >> y1;
    cout << "x2 = ";
    cin >> x2;
    cout << "y2 = ";
    cin >> y2;
    cout << "r1 = ";
    cin >> r1;
    cout << "r2 = ";
    cin >> r2;
    double distance = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
    int sumOfRadiuses = r1 + r2;
    if (distance < sumOfRadiuses)
    {
        cout << "Interception at 2 points.";
    }
    else if (distance == sumOfRadiuses)
    {
        cout << "Interception at 1 point.";
    }
    else
    {
        cout << "No interception.";
    } */
    return 0;
}
