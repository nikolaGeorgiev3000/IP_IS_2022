#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main()
{
    int a, b, c;
    cout << "Enter a, b & c sequentially: \n";
    cin >> a >> b >> c;
    if ((a + b) > c && (b + c) > a && (a + c) > b)
    {
        cout << std::boolalpha << true;
        return 0;
    }
    cout << std::boolalpha << false;
    return 0;
}