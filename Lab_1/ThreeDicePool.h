#pragma once
#include <random>
#include "dice.h"

class ThreeDicePool: public Rollable {
private:
    Rollable& dice1; Rollable& dice2; Rollable& dice3;

public:
    ThreeDicePool(Rollable& d1, Rollable& d2, Rollable& d3);
    unsigned roll() override;
};