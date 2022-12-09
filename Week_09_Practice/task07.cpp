#include <iostream>
#include <iomanip>

void arrayOutput(char *arr, int size)
{
    for (int i = 0; i < size; ++i)
    {
        std::cout << std::setw(5) << *(arr + i) << " ";
    }
    std::cout << std::endl;
}

void arrayModify(char *arr, int size)
{
    for (int i = 0; i < size; ++i)
    {
        if ('A' <= *(arr + i) && *(arr + i) <= 'Z')
        {
            *(arr + i) += ('a' - 'A');
        }
        else if ('a' <= *(arr + i) && *(arr + i) <= 'z')
        {
            *(arr + i) -= ('a' - 'A');
        }
        else if ('1' <= *(arr + i) && *(arr + i) <= '9') // if it is a symbol [_,-,+, etc], it does not change it
        {
            *(arr + i) = '#';
        }
    }
}

int main()
{
    int size;
    std::cout << "Enter char array's size: ";
    std::cin >> size;

    // init symbols with new
    char *symbols = new char[size];

    std::cout << "\nFill your array: \n";
    std::cin.ignore();
    std::cin.getline(symbols, size + 1);

    std::cout << "\nYour array is: \n";
    arrayOutput(symbols, size);

    // modify the array
    arrayModify(symbols, size);

    std::cout << "\nModified array: \n";

    // output the modified array
    arrayOutput(symbols, size);

    // delete array
    delete[] symbols;
    symbols = NULL;

    return 0;
}