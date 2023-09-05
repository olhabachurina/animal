#include "AnimalWorld.h"
#include "Animal.h"

AnimalWorld::AnimalWorld(Continent* continent) : continent_(continent) {}

void AnimalWorld::FeedHerbivores() {
    Herbivore* herbivore = continent_->CreateHerbivore();
    herbivore->EatGrass();
    delete herbivore;
}

void AnimalWorld::HuntCarnivores() {
    Carnivore* carnivore = continent_->CreateCarnivore();
    Herbivore* herbivore = continent_->CreateHerbivore();

    carnivore->Hunt(herbivore);

    delete carnivore;
    delete herbivore;
}