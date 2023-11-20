#ifndef WASHER_H
#define WASHER_H

#include <string>

enum Color {
    WHITE,
    BLACK,
    SILVER,
    RED,
    BLUE
};

struct WashingMachine {
    std::string brand;
    Color color;
    double width;
    double length;
    double height;
    double power;
    int spinSpeed;
    int heatingTemperature;
};

void printWashingMachine(const WashingMachine& washer);

#endif 