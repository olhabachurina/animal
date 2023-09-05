#include "Animal.h"
#include <iostream>

// ���������� ������� ��� ������ Gnu
void Gnu::EatGrass() {
    std::cout << "Gnu is eating grass." << std::endl;
}

int Gnu::GetWeight() const {
    return weight;
}

// ���������� ������� ��� ������ Bison
void Bison::EatGrass() {
    std::cout << "Bison is eating grass." << std::endl;
}

int Bison::GetWeight() const {
    return weight;
}

// ���������� ������� ��� ������ Lion
void Lion::Hunt(Herbivore* herbivore) {
    int carnivoreStrength = GetStrength();
    int herbivoreWeight = herbivore->GetWeight();

    if (herbivoreWeight < carnivoreStrength) {
        // ���������� �������� ������ �� ����, ������ �������� +10 � ����
        SetStrength(carnivoreStrength + 10);
        std::cout << "Lion hunted and gained strength." << std::endl;
    }
    else {
        // ���� ������� ������, ���� ������� ����������� �� -10
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

// ���������� ������� ��� ������ Wolf
void Wolf::Hunt(Herbivore* herbivore) {
    int carnivoreStrength = GetStrength();
    int herbivoreWeight = herbivore->GetWeight();

    if (herbivoreWeight < carnivoreStrength) {
        // ���������� �������� ������ �� ����, ������ �������� +10 � ����
        SetStrength(carnivoreStrength + 10);
        std::cout << "Wolf hunted and gained strength." << std::endl;
    }
    else {
        // ���� ������� ������, ���� ������� ����������� �� -10
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

// ���������� ������� ��� ������ Moose
void Moose::EatGrass() {
    std::cout << "Moose is eating leaves." << std::endl;
}

int Moose::GetWeight() const {
    return weight;
}

// ���������� ������� ��� ������ Tiger
void Tiger::Hunt(Herbivore* herbivore) {
    int carnivoreStrength = GetStrength();
    int herbivoreWeight = herbivore->GetWeight();

    if (herbivoreWeight < carnivoreStrength) {
        // ���������� �������� ������ �� ����, ������ �������� +10 � ����
        SetStrength(carnivoreStrength + 10);
        std::cout << "Tiger hunted and gained strength." << std::endl;
    }
    else {
        // ���� ������� ������, ���� ������� ����������� �� -10
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