#include "DoubleDice.h"

DoubleDice::DoubleDice(Dice& d): PenaltyDice(d), BonusDice(d) {}

unsigned DoubleDice::roll() {
    return PenaltyDice::roll() + BonusDice::roll();
}

DoubleDiceWithoutMI::DoubleDiceWithoutMI(Rollable& d): penalty_d(d), bonus_d(d) {}

unsigned DoubleDiceWithoutMI::roll() {
    return penalty_d.roll() + bonus_d.roll();
}