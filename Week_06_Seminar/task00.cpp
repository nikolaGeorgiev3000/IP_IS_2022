#include <iostream>
#include <iomanip>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int counter = 0;
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            int fact = 1;

            for (int k = 1; k <= counter; ++k)
            {
                if (counter == 0)
                {
                    fact = 1;
                    break;
                }
                fact *= k; // for each position, a new factorial is calculated
            }
            counter++;
            cout << std::setw(10) << fact << " ";
        }
        cout << endl; // new row
    }
    return 0;
}