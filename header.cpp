#include "header.h"
#include <iostream>

using namespace std;

void printIron(const Iron& iron) {
    string colorString;
    switch (iron.color) {
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

    cout << "Brand: " << iron.brand << "\n";
    cout << "Model: " << iron.model << "\n";
    cout << "Color: " << colorString << "\n";
    cout << "Temperature Range: " << iron.minTemperature << "°C to " << iron.maxTemperature << "°C\n";
    cout << "Steam Function: " << (iron.steamFunction ? "Yes" : "No") << "\n";
    cout << "Power: " << iron.power << " W\n";
}
