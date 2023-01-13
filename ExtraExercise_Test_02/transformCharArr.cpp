#include <iostream>

const int MAX_SIZE = 256;

int strLength(char *str)
{
    int result = 0;
    while (*str != '\0')
    {
        ++result;
        ++str;
    }

    return result;
}

void strTransform(char *str)
{
    for (int i = 0; i < strLength(str); ++i)
    {
        if ('a' <= str[i] && str[i] <= 'z')
        {
            str[i] -= ('a' - 'A');
        }
        else if ('A' <= str[i] && str[i] <= 'Z')
        {
            str[i] += ('a' - 'A');
        }
    }
}

void strInput(char *str)
{
    std::cout << "Enter your string: ";
    std::cin.getline(str, MAX_SIZE);
}

void strOutput(char *str)
{
    for (int i = 0; i < strLength(str); ++i)
    {
        std::cout << str[i];
    }
    std::cout << std::endl;
}

int main()
{
    char str[MAX_SIZE];
    strInput(str);
    strTransform(str);
    std::cout << "Your new string is: ";
    strOutput(str);

    return 0;
}