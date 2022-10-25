#include <iostream>
using namespace std;

int main()
{
    // Remove the opening /* and the according */ closing tabs in order to run a TASK

    // TASK 1

    /* float floorWidth, floorHeight, tileSide;
    cout << "Enter floorWidth: ";
    cin >> floorWidth;
    cout << "Enter floorHeight: ";
    cin >> floorHeight;
    cout << "Enter tileSide: ";
    cin >> tileSide;
    float floorArea = floorWidth * floorHeight;
    float tileArea = tileSide * tileSide;
    int tilesCount = floorArea / tileArea;
    tilesCount += 1; // Taking into account the "human factor", a tile could break/rip apart.
    // Considering that, we will always increment by 1, even if we have smth like 30/10 == 3
    // We could also use the ceiling function, but we will need float/double variables +
    // #include <cmath>, so this way is "lighter"
    cout << "Number of tiles needed: " << tilesCount; */

    // TASK 2

    /* float degreesFahrenheit, degreesCelsius, degreesKelvin;
    char choiceOfDegrees;
    cout << "Enter degrees of Fahrenheit: ";
    cin >> degreesFahrenheit;
    degreesCelsius = ((degreesFahrenheit - 32) * 5.0) / 9.0;
    degreesKelvin = degreesCelsius + 273.15;
    cout << "Which degrees would you like me to display?\n";
    cout << "'C' for Celsius, 'K' for Kelvins or 'B' for Both:  ";
    cin >> choiceOfDegrees;
    switch (choiceOfDegrees)
    {
    case 'C':
        cout << "Celsius: " << degreesCelsius << endl;
        break;
    case 'K':
        cout << "Kelvins: " << degreesKelvin;
        break;
    case 'B':
        cout << "Celsius: " << degreesCelsius << "\n"
             << "Kelvins: " << degreesKelvin;
        break;
    default:
        cout << "Enter a valid choice.";
    } */
    return 0;
}