#include "PenaltyDice.h"
#include <algorithm>

PenaltyDice::PenaltyDice(Rollable& d): dice(d) {}

unsigned PenaltyDice::roll() {
    unsigned first = dice.roll();
    unsigned second = dice.roll();
    return std::min(first, second);
}