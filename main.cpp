#include "header.h"
#include <iostream>

using namespace std;

int main() {
    Boiler myBoiler;

    myBoiler.brand = "Example Brand";
    myBoiler.color = SILVER;
    myBoiler.power = 2000.0;
    myBoiler.volume = 50.0;
    myBoiler.heatingTemperature = 60;

    printBoiler(myBoiler);

    return 0;
}
