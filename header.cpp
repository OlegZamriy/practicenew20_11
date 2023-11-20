#include "header.h"
#include <iostream>

using namespace std;

void printWashingMachine(const WashingMachine& washer) {
    string colorString;
    switch (washer.color) {
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
    default:
        colorString = "Unknown";
        break;
    }

    cout << "Brand: " << washer.brand << "\n";
    cout << "Color: " << colorString << "\n";
    cout << "Dimensions (WxLxH): " << washer.width << " x " << washer.length << " x " << washer.height << "\n";
    cout << "Power: " << washer.power << " W\n";
    cout << "Spin Speed: " << washer.spinSpeed << " RPM\n";
    cout << "Heating Temperature: " << washer.heatingTemperature << " °C\n";
}