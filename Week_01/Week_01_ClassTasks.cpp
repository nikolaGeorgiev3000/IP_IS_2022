#include <iostream>
#include <cmath>
using std::cin;
using std::cout;
using std::endl;

int main()
{
     // Remove the opening /* and the according */ closing tabs in order to run a TASK
     // TASK 0
     /* cout << "Hello C++" << endl; */

     // TASK 1
     /* int firstNumber, secondNumber, thirdNumber;
      cout << "firstNumber: ";
      cin >> firstNumber;
      cout << "secondNumber: ";
      cin >> secondNumber;
      cout << "thirdNumber: ";
      cin >> thirdNumber;
      int result = firstNumber + secondNumber + thirdNumber;
      cout << "result: " << result << endl; */

     // TASK 2
     /*  float x1, x2, y1, y2; // Using float in order to take a "more proper" sqrt
     cout << "Point 1: \n"
          << "x = ";
     cin >> x1;
     cout << "y = ";
     cin >> y1;
     cout << "Point 2: \n"
          << "x = ";
     cin >> x2;
     cout << "y = ";
     cin >> y2;
     float distanceBetweenPoints = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
     // No need for the upper variable to have fabs anywhere, since x^2>=0 for every Real x
     cout << "Result: " << distanceBetweenPoints << endl; */

     // TASK 3

     /* int firstNumber, secondNumber, temp;
     cout << "firstNumber: ";
     cin >> firstNumber;
     cout << "secondNumber: ";
     cin >> secondNumber;
     cout << endl; // For clarity in the standard exit

     // First way, using a third variable
     // temp = firstNumber;
     // firstNumber = secondNumber;
     // secondNumber = temp;

     // Second way, without using a third variable
     firstNumber = firstNumber + secondNumber;
     secondNumber = firstNumber - secondNumber;
     firstNumber = firstNumber - secondNumber;

     cout << "firstNumber: " << firstNumber << "\n";
     cout << "secondNumber: " << secondNumber << "\n"; */

     // TASK 3.5

     /*
     "/" - division operator - is pretty similar to the division we know from HighSchool. If we divide integers, we will get
     an integer, as a result, but -> result = floor(<division_with_/_>). If we divide real numbers, it is
     the same as the normal division of two real numbers.
     "%" - remainder(modulus) operator - is used to find the remainder of the division of WHOLE numbers.
     For example: 10 % 3 == 1, 13 % 4 == 1, etc... Note: We can't use the remainder operator with real
     numbers, the compiler will simply give an error.\
     Example:
     cout << 14.0 % 3.0 << endl; // error: invalid operands of types 'double' and 'double' to binary 'operator%
     */

     // TASK 4

     /* int threeDigitNumber, firstDigit, secondDigit, thirdDigit, sumOfDigits;
     cout << "Enter a positive whole three-digit number: ";
     cin >> threeDigitNumber;
     firstDigit = threeDigitNumber / 100;
     secondDigit = threeDigitNumber / 10 % 10;
     thirdDigit = threeDigitNumber % 10;
     sumOfDigits = firstDigit + secondDigit + thirdDigit;
     cout << "First digit: " << firstDigit << endl;
     cout << "Second digit: " << secondDigit << endl;
     cout << "Third digit: " << thirdDigit << endl;
     cout << "Sum of digits: " << sumOfDigits << endl; */

     return 0;
}