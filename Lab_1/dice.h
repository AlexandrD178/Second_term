#pragma once
#include <random>
#include "Rollable.h"

class Dice: public Rollable {
private:
    unsigned max;
    std::uniform_int_distribution<unsigned> dstr;
    std::default_random_engine reng;

public:
    Dice(unsigned max, unsigned seed);
    unsigned roll() override;
};