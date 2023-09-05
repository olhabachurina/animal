#include "Animal.h"
#include <iostream>

// Реализация методов для класса Gnu
void Gnu::EatGrass() {
    std::cout << "Gnu is eating grass." << std::endl;
}

int Gnu::GetWeight() const {
    return weight;
}

// Реализация методов для класса Bison
void Bison::EatGrass() {
    std::cout << "Bison is eating grass." << std::endl;
}

int Bison::GetWeight() const {
    return weight;
}

// Реализация методов для класса Lion
void Lion::Hunt(Herbivore* herbivore) {
    int carnivoreStrength = GetStrength();
    int herbivoreWeight = herbivore->GetWeight();

    if (herbivoreWeight < carnivoreStrength) {
        // Травоядное животное меньше по весу, хищник получает +10 к силе
        SetStrength(carnivoreStrength + 10);
        std::cout << "Lion hunted and gained strength." << std::endl;
    }
    else {
        // Сила хищника меньше, сила хищника уменьшается на -10
        SetStrength(carnivoreStrength - 10);
        std::cout << "Lion hunted but lost strength." << std::endl;
    }
}

int Lion::GetStrength() const {
    return strength;
}

void Lion::SetStrength(int strength) {
    this->strength = strength;
}

// Реализация методов для класса Wolf
void Wolf::Hunt(Herbivore* herbivore) {
    int carnivoreStrength = GetStrength();
    int herbivoreWeight = herbivore->GetWeight();

    if (herbivoreWeight < carnivoreStrength) {
        // Травоядное животное меньше по весу, хищник получает +10 к силе
        SetStrength(carnivoreStrength + 10);
        std::cout << "Wolf hunted and gained strength." << std::endl;
    }
    else {
        // Сила хищника меньше, сила хищника уменьшается на -10
        SetStrength(carnivoreStrength - 10);
        std::cout << "Wolf hunted but lost strength." << std::endl;
    }
}

int Wolf::GetStrength() const {
    return strength;
}

void Wolf::SetStrength(int strength) {
    this->strength = strength;
}

// Реализация методов для класса Moose
void Moose::EatGrass() {
    std::cout << "Moose is eating leaves." << std::endl;
}

int Moose::GetWeight() const {
    return weight;
}

// Реализация методов для класса Tiger
void Tiger::Hunt(Herbivore* herbivore) {
    int carnivoreStrength = GetStrength();
    int herbivoreWeight = herbivore->GetWeight();

    if (herbivoreWeight < carnivoreStrength) {
        // Травоядное животное меньше по весу, хищник получает +10 к силе
        SetStrength(carnivoreStrength + 10);
        std::cout << "Tiger hunted and gained strength." << std::endl;
    }
    else {
        // Сила хищника меньше, сила хищника уменьшается на -10
        SetStrength(carnivoreStrength - 10);
        std::cout << "Tiger hunted but lost strength." << std::endl;
    }
}

int Tiger::GetStrength() const {
    return strength;
}

void Tiger::SetStrength(int strength) {
    this->strength = strength;
}