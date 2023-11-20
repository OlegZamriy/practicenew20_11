#ifndef ANIMAL_H
#define ANIMAL_H

#include <string>

enum AnimalClass {
    MAMMAL,
    BIRD,
    REPTILE,
    AMPHIBIAN,
    FISH,
    INVERTEBRATE
};

struct Animal {
    std::string name;
    AnimalClass animalClass;
    std::string nickname;
};

void fillAnimal(Animal& animal, const std::string& name, AnimalClass animalClass, const std::string& nickname);
void printAnimal(const Animal& animal);
void makeSound(const Animal& animal);

#endif 
