#include <iostream>

void printFromAtoZ(char letter, int size)
{
    if (size == 0)
        return;
    std::cout << letter << " ";
    printFromAtoZ((char)(letter + 1), size - 1);
    std::cout << letter << " ";
}

int main()
{
    std::cout << "Output: \n";
    printFromAtoZ('A', (int)(('Z' - 'A') + 1));
    return 0;
}