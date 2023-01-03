#include <iostream>

const int BUFFER_SIZE = 32; // This is used for the function hexToBinaryRec(), which is the maximum number of digits that a 32-bit integer can have in binary representation

int sumOfDigits(int n)
{
    if (n == 0)
    {
        return 0;
    }

    return (n % 10) + sumOfDigits(n / 10); // lastDigit + ... + lastDigit -> adding the digits until we reach number 0
}

int recStrlen(const char *str)
{
    if (*str == '\0')
        return 0;

    return 1 + recStrlen(++str); // 1 + ... + 1 -> adding 1's until we reach the terminating zero
}

int countDigits(int n)
{ // Needed for the recReverseNumber function
    if (n == 0)
    {
        return 0;
    }

    return 1 + countDigits(n / 10);
}

int pow(int n, int p)
{ // Needed for the recReverseNumber function
    if (p == 0)
    {
        return 1;
    }
    if (p == 1)
    {
        return n;
    }

    return n * pow(n, p - 1);
}

int reverse(int n)
{
    if (n == 0)
    {
        return 0;
    }

    return n % 10 * pow(10, countDigits(n) - 1) + reverse(n / 10);
}

int reverse2(int n, int reversed = 0)
{
    if (n == 0)
    {
        return reversed;
    }

    return reverse2(n / 10, reversed * 10 + n % 10); // The second parameter frees-up a slot, and puts the lastDigit of 'n' there
}

int factorial(int n)
{
    if (n == 0)
        return 1;

    return n * factorial(n - 1);
}

bool areEqual(const char *str1, const char *str2) // Using const, because we can't hard-code it otherwise...
{
    // If both strings are empty, they are equal
    if (*str1 == '\0' && *str2 == '\0')
    {
        return true;
    }
    // If only one of the strings is empty, they are not equal
    if (*str1 == '\0' || *str2 == '\0')
    {
        return false;
    }
    // If the characters at the current position are not equal, the strings are not equal
    if (*str1 != *str2)
    {
        return false;
    }
    // The strings are equal if the rest of the strings are equal, so we procede with the rest
    return areEqual(++str1, ++str2);
}

int recFibonacci(int n)
{
    // The base cases for the Fibonacci sequence are F(0) = 0 and F(1) = 1
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;

    // The n-th term of the Fibonacci sequence is the sum of the previous two terms
    return recFibonacci(n - 2) + recFibonacci(n - 1);
}

int findMin(int *arr, int size)
{
    // If the array has only one element, it is the minimum element
    if (size == 1)
        return *arr;

    // Find the minimum element of the rest of the array
    int minRest = findMin(++arr, --size);

    // Compare the first element and min of the rest of the array
    return (*arr < minRest) ? *arr : minRest;
}

char *hexToBinaryRec(int n, char *buffer)
{
    // If the number is zero, returns an empty string
    if (n == 0)
    {
        *buffer = '\0';
        return buffer;
    }

    // Compute the binary representation of the rest of the number
    char *binaryRest = hexToBinaryRec(n / 2, buffer);

    // Append the last digit to the binary representation of the rest of the number
    int len = recStrlen(binaryRest);
    binaryRest[len] = (n % 2) + '0';
    binaryRest[len + 1] = '\0';
    return binaryRest;
}

char *hexToBinary(int n)
{
    // Allocate a buffer for the result, with dynamic memory alloc
    char *buffer = new char[BUFFER_SIZE];

    // Convert the number to binary and return the result
    return hexToBinaryRec(n, buffer); // Calls the recursive function
}

void evaluate(const char *str, int &smallLetters, int &capitalLetters, int &digits)
{
    // Empty string
    if (*str == '\0')
    {
        return;
    }
    // Check the correct intervals, and increment the according variable
    if (*str >= 'a' && *str <= 'z')
    {
        ++smallLetters;
    }
    else if (*str >= 'A' && *str <= 'Z')
    {
        ++capitalLetters;
    }
    else if (*str >= '0' && *str <= '9')
    {
        ++digits;
    }
    // Evaluate the rest of the string
    evaluate(++str, smallLetters, capitalLetters, digits);
}

char *swapcase(char *str)
{
    if (*str == '\0')
        return str;

    // Swap the case of the current character
    if (*str >= 'a' && *str <= 'z')
    {
        *str -= ('a' - 'A');
    }
    else if (*str >= 'A' && *str <= 'Z')
    {
        *str += ('a' - 'A');
    }

    return swapcase(++str);
}

int main()
{
    // Hard-coding the outputs

    // Task_0
    std::cout << "The sum of digits of the number 151243 is: " << sumOfDigits(151243) << std::endl;
    std::cout << std::endl;

    // Task_1
    std::cout << "The length of this specific string is: " << recStrlen("Happy new year") << std::endl;
    std::cout << std::endl;

    // Task_2
    std::cout << "The reverse of 152352 is: " << reverse2(152352) << std::endl;
    std::cout << std::endl;

    // Task_3
    std::cout << "5! = " << factorial(5) << std::endl;
    std::cout << std::endl;

    // Task_4
    std::cout << "Let's see whether \"Hello\" and \"Hi\" are equal or not ['true' for equal, 'false' for not equal] -> "
              << std::boolalpha << areEqual("Hello", "Hi") << std::endl;
    std::cout << std::endl;

    // Task_5
    std::cout << "The 10th member of the Fibonacci sequence is: " << recFibonacci(10) << std::endl;
    std::cout << std::endl;

    // Task_6
    int arr[6] = {10, 53, -4, 23, 12, 0};
    std::cout << "The minimum element of the array[10, 53, -4, 23, 12, 0] is: " << findMin(arr, 6) << std::endl;
    std::cout << std::endl;

    // Task_7
    std::cout << "The number 165123 in binary is: " << hexToBinary(165123) << std::endl;
    std::cout << std::endl;

    // Task_8
    int smallLetters = 0, capitalLetters = 0, digits = 0;
    evaluate("3 Doors Down", smallLetters, capitalLetters, digits);
    std::cout << "The string we have is \"3 Doors Down\": " << std::endl;
    std::cout << "Small letters: " << smallLetters << std::endl;
    std::cout << "Capital letters: " << capitalLetters << std::endl;
    std::cout << "Digits: " << digits << std::endl;
    std::cout << std::endl;

    // Task_9
    char str[] = "Yellow Submarine";
    char *modifiedStr = swapcase(str);
    std::cout << "Let's modify \"Yellow Submarine\" -> " << std::endl;

    for (int i = 0; i < recStrlen(modifiedStr); ++i)
    {
        std::cout << *(modifiedStr + i);
    }
    std::cout << std::endl;
    return 0;
}