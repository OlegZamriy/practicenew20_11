#include "header.h"
#include <iostream>

using namespace std;

void printBoiler(const Boiler& boiler) {
    string colorString;
    switch (boiler.color) {
    case WHITE:
        colorString = "White";
        break;
    case BLACK:
        colorString = "Black";
        break;
    case SILVER:
        colorString = "Silver";
        break;
    case RED:
        colorString = "Red";
        break;
    case BLUE:
        colorString = "Blue";
        break;
    case GREEN:
        colorString = "Green";
        break;
    default:
        colorString = "Unknown";
        break;
    }

    cout << "Brand: " << boiler.brand << "\n";
    cout << "Color: " << colorString << "\n";
    cout << "Power: " << boiler.power << " W\n";
    cout << "Volume: " << boiler.volume << " liters\n";
    cout << "Heating Temperature: " << boiler.heatingTemperature << " °C\n";
}
