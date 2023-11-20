#include "header.h"
#include <iostream>

using namespace std;

void fillAnimal(Animal& animal, const string& name, AnimalClass animalClass, const string& nickname) {
    animal.name = name;
    animal.animalClass = animalClass;
    animal.nickname = nickname;
}

void printAnimal(const Animal& animal) {
    string classString;
    switch (animal.animalClass) {
    case MAMMAL:
        classString = "Mammal";
        break;
    case BIRD:
        classString = "Bird";
        break;
    case REPTILE:
        classString = "Reptile";
        break;
    case AMPHIBIAN:
        classString = "Amphibian";
        break;
    case FISH:
        classString = "Fish";
        break;
    case INVERTEBRATE:
        classString = "Invertebrate";
        break;
    default:
        classString = "Unknown";
        break;
    }

    cout << "Name: " << animal.name << "\n";
    cout << "Class: " << classString << "\n";
    cout << "Nickname: " << animal.nickname << "\n";
}

void makeSound(const Animal& animal) {
    cout << "The " << animal.name << " makes a sound.\n";
}
