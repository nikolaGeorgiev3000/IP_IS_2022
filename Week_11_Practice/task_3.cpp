#include <iostream>
#include <cstring>

const int MAX_SIZE = 256;

bool isPalindrome(char *str, int size)
{
    if (size <= 1)
    {
        // An string of size 0 or 1 is always considered to be a palindrome.
        return true;
    }

    // Check if the first and last elements are equal. If they are,
    // check the rest of the string. If they are not, the string is not a palindrome.
    if (*str == *(str + size - 1))
    {
        return isPalindrome(str + 1, size - 2);
    }
    else
    {
        return false;
    }
}

int main()
{
    char *str = new char[MAX_SIZE];

    std::cout << "Enter your string: ";
    std::cin.getline(str, MAX_SIZE);

    int strLength = strlen(str);

    std::cout << std::endl;

    std::cout << "Your string is a palindrome: " << std::boolalpha << isPalindrome(str, strLength) << std::endl;

    // delete
    delete[] str;

    return 0;
}