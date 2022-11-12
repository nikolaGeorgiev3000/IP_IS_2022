// Batman and Bat-Mobile
#include <iostream>
#include <cmath>

using std::cin;
using std::cout;
using std::endl;

void printDirections(double batmanX, double batmanY, double batMobX, double batMobY)
{
    double distanceBatmanAndBatmobile = sqrt((batMobX - batmanX) * (batMobX - batmanX) + (batMobY - batmanY) * (batMobY - batmanY));
    if (distanceBatmanAndBatmobile <= 0.1)
    {
        cout << "You're there already!";
    }
    else if (batmanX == batMobX && batmanY < batMobY)
    {
        cout << "Go N.";
    }
    else if (batmanX == batMobX && batmanY > batMobY)
    {
        cout << "Go S.";
    }
    else if (batmanX > batMobX && batmanY == batMobY)
    {
        cout << "Go W.";
    }
    else if (batmanX < batMobX && batmanY == batMobY)
    {
        cout << "Go E.";
    }
    else if (batmanX < batMobX && batmanY < batMobY)
    {
        cout << "Go NE.";
    }
    else if (batmanX > batMobX && batmanY < batMobY)
    {
        cout << "Go NW.";
    }
    else if (batmanX < batMobX && batmanY > batMobY)
    {
        cout << "Go SE.";
    }
    else if (batmanX > batMobX && batmanY > batMobY)
    {
        cout << "Go SW.";
    }
    else
    {
        cout << "You're there already!";
    }
}

int main()
{
    double batmanX, batmanY, batMobX, batMobY;

    cout << "Enter Batman's coordinates: \n";
    cin >> batmanX >> batmanY;
    cout << "Enter Batmobile's coordinates: \n";
    cin >> batMobX >> batMobY;

    printDirections(batmanX, batmanY, batMobX, batMobY);

    return 0;
}