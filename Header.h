#ifndef BOILER_H
#define BOILER_H

#include <string>

enum BoilerColor {
    WHITE,
    BLACK,
    SILVER,
    RED,
    BLUE,
    GREEN
};

struct Boiler {
    std::string brand;
    BoilerColor color;
    double power;
    double volume;
    int heatingTemperature;
};

void printBoiler(const Boiler& boiler);

#endif 
