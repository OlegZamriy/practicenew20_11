#include "header.h"
#include <iostream>

using namespace std;

int main() {
    Iron myIron;

    myIron.brand = "Example Brand";
    myIron.model = "ZXC Model";
    myIron.color = BLUE;
    myIron.minTemperature = 100;
    myIron.maxTemperature = 200;
    myIron.steamFunction = true;
    myIron.power = 1500.0;

    printIron(myIron);

    return 0;
}
