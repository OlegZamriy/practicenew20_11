#pragma once
#ifndef IRON_H
#define IRON_H

#include <string>

enum IronColor {
    WHITE,
    BLACK,
    SILVER,
    RED,
    BLUE,
    GREEN
};

struct Iron {
    std::string brand;
    std::string model;
    IronColor color;
    int minTemperature;
    int maxTemperature;
    bool steamFunction;
    double power;
};

void printIron(const Iron& iron);

#endif 
