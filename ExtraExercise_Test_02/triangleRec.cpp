#include <iostream>

void triangleOutput(int n, int countStars, bool isAscending)
{
    if (n == 0)
        return;
    for (int i = 0; i < countStars; ++i)
    {
        std::cout << '*';
    }
    std::cout << std::endl;
    if (isAscending)
    {
        triangleOutput(n - 1, countStars + 1, isAscending);
    }
    else if (n != 1)
    {
        triangleOutput(n - 1, countStars - 1, isAscending);
    }
}

int main()
{
    int n;
    std::cin >> n;
    triangleOutput(n, 1, true);
    triangleOutput(n - 1, n - 1, false);
    return 0;
}
