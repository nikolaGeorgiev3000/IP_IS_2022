#include <iostream>
#include <cmath>
using std::cin;
using std::cout;
using std::endl;

int main()
{
    // a)
    // int p;
    // cout << "Enter p: ";
    // cin >> p;
    // cout << std::boolalpha << (p % 4 == 0 || p % 7 == 0) ? true : false;

    // b) ax2 + bx + c = 0 does not have real roots
    // int a, b, c;
    // float discriminant;
    // cout << "Enter a, b & c sequentially: \n";
    // cin >> a >> b >> c;
    // discriminant = b * b - 4 * a * c;
    // cout << std::boolalpha << (discriminant < 0) ? true : false;

    // c) circleCenter(0, 1), circleRadius = 5;
    // float a, b; // the coordinates of our guessPoint, no need for variables about the circle
    // float guessPointDistanceFromCircleCenter;
    // cout << "Enter guessPoint (x, y): /n";
    // cin >> a >> b;
    // guessPointDistanceFromCircleCenter = sqrt((a) * (a) + (b - 1) * (b - 1)); // here we have (a - 0)*(a - 0)
    // bool isInside = (guessPointDistanceFromCircleCenter <= 5) ? true : false; // the radius of the circle is fixed, r = 5
    // cout << std::boolalpha << isInside;

    // d) whether (a, b) is outside of circle with radius f and center (c, d)
    // float circleCenterX, circleCenterY, circleRadius; // c, d and f from the original task
    // float guessPointX, guessPointY;                   // a, b from the original task
    // float guessPointDistanceFromCircleCenter;
    // cout << "Enter circle center (x, y) coord: \n";
    // cin >> circleCenterX >> circleCenterY;
    // cout << "Enter circle radius: ";
    // cin >> circleRadius;
    // cout << "Enter guessPoint (x, y) coord: \n";
    // cin >> guessPointX >> guessPointY;
    // // We assign the distance between the circleCenter and the guessPoint to the next variable
    // guessPointDistanceFromCircleCenter = sqrt((guessPointX - circleCenterX) * (guessPointX - circleCenterX) +
    //                                           (guessPointY - circleCenterY) * (guessPointY - circleCenterY));
    // bool isOutside = (guessPointDistanceFromCircleCenter > circleRadius) ? true : false; // returns false if
    // // our point is INSIDE
    // cout << std::boolalpha << isOutside;

    // e) whether guessPointCoord are inside the circle, but in Third Quadrant
    // float guessPointX, guessPointY;
    // cout << "Enter guessPoint coord. (x, y): \n";
    // cin >> guessPointX >> guessPointY;
    // if (guessPointX >= 0 || guessPointY >= 0) // Here the guessPointCoord are not in the Third Quadrant
    // {
    //     cout << std::boolalpha << false;
    //     return 0;
    // }
    // float guessPointDistanceFromCircleCenter = sqrt((guessPointX) * (guessPointX) + (guessPointY) * (guessPointY)); // circle center is (0, 0)
    // bool isInsideCircleAndThirdQuadrant = (guessPointDistanceFromCircleCenter <= 5) ? true : false;                 // radius of the circle is 5
    // cout << std::boolalpha << isInsideCircleAndThirdQuadrant;

    // f) isBetween figure with radius 5 and 10, and center(0, 0)
    // float guessPointX, guessPointY;
    // cout << "Enter guessPoint coord. (x , y): \n";
    // cin >> guessPointX >> guessPointY;
    // float guessPointDistanceFromCircleCenter = sqrt((guessPointX) * (guessPointX) + (guessPointY) * (guessPointY)); // circle center is (0, 0)
    // bool isInsideDonut = (guessPointDistanceFromCircleCenter >= 5 && guessPointDistanceFromCircleCenter <= 10) ? true : false;
    // cout << std::boolalpha << isInsideDonut;

    // g) x is between 0 and 1, closed interval
    // float x;
    // cout << "Enter x: ";
    // cin >> x;
    // bool isXInside = (x >= 0 && x <= 1) ? true : false;
    // cout << std::boolalpha << isXInside;

    // h) x is max = {a, b, c}
    // int a, b, c;
    // cout << "Enter a, b, c: \n";
    // cin >> a >> b >> c;
    // int x;
    // cout << "Enter x: ";
    // cin >> x;
    // int max1 = (a > b) ? a : b;
    // int max2 = (max1 > c) ? max1 : c;
    // bool isXMax = (x == max2) ? true : false;
    // cout << std::boolalpha << isXMax;

    // i) is x != max{a, b, c}
    // int a, b, c;
    // cout << "Enter a, b, c: \n";
    // cin >> a >> b >> c;
    // int x;
    // cout << "Enter x: ";
    // cin >> x;
    // int max1 = (a > b) ? a : b;
    // int max2 = (max1 > c) ? max1 : c;
    // bool isXMax = (x == max2) ? false : true; // prints out false IFF x == max2
    // cout << std::boolalpha << isXMax;

    // j) at least x or y has true
    // bool x, y;
    // cout << "Enter x, y, as booleans: \n";
    // cin >> x >> y;
    // bool isAtLeastOneTrue = (x || y) ? true : false;
    // cout << std::boolalpha << isAtLeastOneTrue;

    // k) both have true
    // bool x, y;
    // cout << "Enter x, y, as booleans: \n";
    // cin >> x >> y;
    // bool isAtLeastOneTrue = (x && y) ? true : false;
    // cout << std::boolalpha << isAtLeastOneTrue;

    // l) all of a, b, c are nonPositive
    // int a, b, c;
    // cout << "Enter a, b, c seq: \n";
    // cin >> a >> b >> c;
    // bool notPositive = ((a <= 0) && (b <= 0) && (c <= 0)) ? true : false; // the original condition is
    // // saying that none of the numbers are positive, so, the Negation of (a > 0) is (a <= 0)
    // cout << std::boolalpha << notPositive;

    // m) whether '7' is part of positive 3-digit number p
    // int p;
    // cout << "Enter a positive 3-digit number: ";
    // cin >> p;
    // int firstDigit = p / 100;
    // int secondDigit = p / 10 % 10;
    // int thirdDigit = p % 10;
    // bool is7PartOfP = (firstDigit == 7 || secondDigit == 7 || thirdDigit == 7) ? true : false;
    // cout << std::boolalpha << is7PartOfP;

    // n) whether the digits of 3 digit number m are diff
    // int m;
    // cout << "Enter a 3-digit number: ";
    // cin >> m;
    // int firstDigit = m / 100;
    // int secondDigit = m / 10 % 10;
    // int thirdDigit = m % 10;
    // bool isDigitsDiff = ((firstDigit != secondDigit) && (firstDigit != thirdDigit) &&
    //                      (secondDigit != thirdDigit))
    //                         ? true
    //                         : false;
    // cout << std::boolalpha << isDigitsDiff;

    // o) at least 2 digits of m are equal
    // int m;
    // cout << "Enter a 3-digit number: ";
    // cin >> m;
    // int firstDigit = m / 100;
    // int secondDigit = m / 10 % 10;
    // int thirdDigit = m % 10;
    // bool atLeast2EqualDigits = ((firstDigit == secondDigit) || (firstDigit == thirdDigit) ||
    //                             (secondDigit == thirdDigit))
    //                                ? true
    //                                : false;
    // cout << std::boolalpha << atLeast2EqualDigits;
    return 0;
}