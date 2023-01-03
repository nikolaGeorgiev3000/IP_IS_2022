#include <iostream>
#include <iomanip>

void arrInput(char *arr, int size)
{
    std::cin.getline(arr, size + 1);
}

void arrayOutput(char *str, int size)
{
    for (int i = 0; i < size; ++i)
    {
        std::cout << std::setw(5) << *(str + i) << " ";
    }
}

int strlen(char *str)
{
    int result = 0;
    while (*str != '\0')
    {
        ++str;
        ++result;
    }
    return result;
}

void strcpy(char *initialStr, char *&destinationStr)
{
    if (destinationStr != nullptr) // in case of a non-empty string
    {
        delete[] destinationStr;
    }

    int size = strlen(initialStr) + 1;
    destinationStr = new char[size];

    for (int i = 0; i < size; ++i)
    {
        *(destinationStr + i) = *(initialStr + i);
    }

    destinationStr[size - 1] = '\0';
}

char *strcat(char *str1, char *str2)
{
    int str1Length = strlen(str1);
    int str2Length = strlen(str2);
    int length = str1Length + str2Length + 1; // + 1 cuz of the '\0'
    char *result = new char[length];

    strcpy(str1, result); // taking care of the first string

    for (int i = str1Length; i < length; ++i)
    {
        for (int j = 0; j < str2Length; ++j)
        {
            *(result + i) = *(str2 + j);
        }
    }

    result[length - 1] = '\0';

    return result;
}
int main()
{
    int size;
    std::cout << "Enter the size of the string: ";
    std::cin >> size;

    // init char arr with new
    char *initialStr = new char[size];
    char *destinationStr = nullptr;

    std::cin.ignore();

    arrInput(initialStr, size);
    strcpy(initialStr, destinationStr);

    // destinationStr output
    std::cout << "\nYour new array is: \n";
    arrayOutput(destinationStr, size);

    // delete arr
    delete[] initialStr;
    delete[] destinationStr;
    initialStr = NULL;
    destinationStr = NULL;

    return 0;
}