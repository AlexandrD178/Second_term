#pragma once
#include <random>
#include "dice.h"

class ThreeDicePool: public Rollable {
private:
    Dice dice1, dice2, dice3;

public:
    ThreeDicePool(unsigned max, unsigned seed1, unsigned seed_2, unsigned seed_3);
    unsigned roll() override;
};