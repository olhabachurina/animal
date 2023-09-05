#pragma once
#include "Continent.h"

class AnimalWorld {
public:
    AnimalWorld(Continent* continent);
    void FeedHerbivores();
    void HuntCarnivores();
private:
    Continent* continent_;
};