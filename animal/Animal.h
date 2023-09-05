#pragma once
#include <iostream>

#include <iostream>

class Herbivore {
public:
    virtual ~Herbivore() = default;
    virtual void EatGrass() = 0;
    virtual int GetWeight() const = 0;
};

class Carnivore {
public:
    virtual ~Carnivore() = default;
    virtual void Hunt(Herbivore* herbivore) = 0;
    virtual int GetStrength() const = 0;
    virtual void SetStrength(int strength) = 0;
};

class Gnu : public Herbivore {
private:
    int weight;

public:
    Gnu(int initialWeight) : weight(initialWeight) {}
    void EatGrass() override;
    int GetWeight() const override;
};

class Bison : public Herbivore {
private:
    int weight;

public:
    Bison(int initialWeight) : weight(initialWeight) {}
    void EatGrass() override;
    int GetWeight() const override;
};

class Lion : public Carnivore {
private:
    int strength;

public:
    Lion(int initialStrength) : strength(initialStrength) {}
    void Hunt(Herbivore* herbivore) override;
    int GetStrength() const override;
    void SetStrength(int strength) override;
};

class Wolf : public Carnivore {
private:
    int strength;

public:
    Wolf(int initialStrength) : strength(initialStrength) {}
    void Hunt(Herbivore* herbivore) override;
    int GetStrength() const override;
    void SetStrength(int strength) override;
};

class Moose : public Herbivore {
private:
    int weight;

public:
    Moose(int initialWeight) : weight(initialWeight) {}
    void EatGrass() override;
    int GetWeight() const override;
};

class Tiger : public Carnivore {
private:
    int strength;

public:
    Tiger(int initialStrength) : strength(initialStrength) {}
    void Hunt(Herbivore* herbivore) override;
    int GetStrength() const override;
    void SetStrength(int strength) override;
};