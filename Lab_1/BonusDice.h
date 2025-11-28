#pragma once
#include "Rollable.h"

class BonusDice: virtual public Rollable {
private:
    Rollable& dice;
public:
    BonusDice(Rollable& d);
    unsigned roll() override;
};

