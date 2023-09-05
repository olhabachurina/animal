#pragma once
#include <vector>
#include "Animal.h"

class Continent {
public:
    virtual ~Continent() = default;
    virtual Herbivore* CreateHerbivore() = 0;
    virtual Carnivore* CreateCarnivore() = 0;
};

class Africa : public Continent {
public:
    Herbivore* CreateHerbivore() override;
    Carnivore* CreateCarnivore() override;
};

class NorthAmerica : public Continent {
public:
    Herbivore* CreateHerbivore() override;
    Carnivore* CreateCarnivore() override;
};

class Eurasia : public Continent {
public:
    Herbivore* CreateHerbivore() override;
    Carnivore* CreateCarnivore() override;
};