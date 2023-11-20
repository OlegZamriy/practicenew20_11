#include "header.h"
#include <iostream>

using namespace std;

int main() {
    WashingMachine myWasher;

    myWasher.brand = "Example Brand";
    myWasher.color = WHITE;
    myWasher.width = 60.0;
    myWasher.length = 80.0;
    myWasher.height = 100.0;
    myWasher.power = 1200.0;
    myWasher.spinSpeed = 1200;
    myWasher.heatingTemperature = 40;

    printWashingMachine(myWasher);

    return 0;
}