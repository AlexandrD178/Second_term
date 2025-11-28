#pragma once
#include "Rollable.h"

class PenaltyDice: virtual public Rollable {
private:
    Rollable& dice;
public:
    PenaltyDice(Rollable& d);
    unsigned roll() override;
};
