#include "Continent.h"
#include "Animal.h"

// ���������� ��� ���������� Africa
Herbivore* Africa::CreateHerbivore() {
    return new Gnu(400); // ������ ���������� ����
}

Carnivore* Africa::CreateCarnivore() {
    return new Lion(100); // ������ ��������� ����
}

// ���������� ��� ���������� NorthAmerica
Herbivore* NorthAmerica::CreateHerbivore() {
    return new Moose(600); // ������ ���������� ����
}

Carnivore* NorthAmerica::CreateCarnivore() {
    return new Tiger(120); // ������ ��������� ����
}

// ���������� ��� ���������� Eurasia
Herbivore* Eurasia::CreateHerbivore() {
    return new Bison(500); // ������ ���������� ����
}

Carnivore* Eurasia::CreateCarnivore() {
    return new Wolf(90); // ������ ��������� ����
}
