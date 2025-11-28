#pragma once
#include "PenaltyDice.h"
#include "BonusDice.h"
#include "dice.h"

class DoubleDice: public PenaltyDice, public BonusDice {
public:
    DoubleDice(Dice& d);
    unsigned roll() override;
};

class DoubleDiceWithoutMI: public Rollable {
private:
    PenaltyDice penalty_d;
    BonusDice bonus_d;
public:
    DoubleDiceWithoutMI(Rollable& d);
    unsigned roll() override;
};