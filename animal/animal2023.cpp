// animal.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Continent.h"
#include "AnimalWorld.h"

int main() {
    
    // Создаем континенты
    Continent* africa = new Africa;
    Continent* northAmerica = new NorthAmerica;
    Continent* eurasia = new Eurasia; // Добавляем континент "Евразия"

    // Создаем миры животных на континентах
    AnimalWorld africaWorld(africa);
    AnimalWorld northAmericaWorld(northAmerica);
    AnimalWorld eurasiaWorld(eurasia);

    // Запускаем симуляции для всех континентов
    std::cout << "Africa World:" << std::endl;
    africaWorld.FeedHerbivores();
    africaWorld.HuntCarnivores();

    std::cout << "\nNorth America World:" << std::endl;
    northAmericaWorld.FeedHerbivores();
    northAmericaWorld.HuntCarnivores();

    std::cout << "\nEurasia World:" << std::endl;
    eurasiaWorld.FeedHerbivores();
    eurasiaWorld.HuntCarnivores();

    // Освобождаем ресурсы
    delete africa;
    delete northAmerica;
    delete eurasia;

    return 0;
}







// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
