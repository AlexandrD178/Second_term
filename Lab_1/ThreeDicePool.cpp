#include "ThreeDicePool.h"

ThreeDicePool::ThreeDicePool(Rollable& d1, Rollable& d2, Rollable& d3) :
    dice1(d1), dice2(d2), dice3(d3) {}

unsigned ThreeDicePool::roll() {
    return dice1.roll() + dice2.roll() + dice3.roll();
}