#include "BonusDice.h"
#include <algorithm>

BonusDice::BonusDice(Rollable& d): dice(d) {}

unsigned BonusDice::roll() {
    unsigned first = dice.roll();
    unsigned second = dice.roll();
    return std::max(first, second);
}