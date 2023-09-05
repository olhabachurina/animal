#include "Continent.h"
#include "Animal.h"

// Реализация для континента Africa
Herbivore* Africa::CreateHerbivore() {
    return new Gnu(400); // Пример начального веса
}

Carnivore* Africa::CreateCarnivore() {
    return new Lion(100); // Пример начальной силы
}

// Реализация для континента NorthAmerica
Herbivore* NorthAmerica::CreateHerbivore() {
    return new Moose(600); // Пример начального веса
}

Carnivore* NorthAmerica::CreateCarnivore() {
    return new Tiger(120); // Пример начальной силы
}

// Реализация для континента Eurasia
Herbivore* Eurasia::CreateHerbivore() {
    return new Bison(500); // Пример начального веса
}

Carnivore* Eurasia::CreateCarnivore() {
    return new Wolf(90); // Пример начальной силы
}
