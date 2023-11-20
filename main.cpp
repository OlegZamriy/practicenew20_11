#include "header.h"
#include <iostream>

using namespace std;

int main() {
    Animal myAnimal;

    fillAnimal(myAnimal, "Lion", MAMMAL, "Leo");

    printAnimal(myAnimal);

    makeSound(myAnimal);

    return 0;
}
