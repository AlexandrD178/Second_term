#include <iostream>

#include "dice.h"
#include "ThreeDicePool.h"
#include "expected_value.h"

#include "PenaltyDice.h"
#include "BonusDice.h"
#include "probability.h"

#include "DoubleDice.h"

int main() {
    Dice d6(6, 8);
    std::cout << "First task." << std::endl;
    std::cout << "One dice: " << d6.roll() << std::endl;
    std::cout << "10000 rolls: " << expected_value(d6) << std::endl;
    unsigned a = static_cast<double>((1+2+3+4+5+6)/6.0);
    std::cout << "theoretical value: " << a << std::endl;

    Dice d6_1(6, 1);
    Dice d6_2(6, 7);
    Dice d6_3(6, 17);
    ThreeDicePool three_d6(d6_1, d6_2, d6_3);
    std::cout << "One roll: " << three_d6.roll() << std::endl;
    std::cout << "10000 rolls: " << expected_value(three_d6) << std::endl;
    std::cout << " " << std::endl;



    std::cout << "Second task." << std::endl;
    Dice d100(100, 17);
    PenaltyDice penalty_d100(d100);
    BonusDice bonus_d100(d100);
    std::cout << "Histogram for d100:" << std::endl;
    print_histogram(d100, 1, 100, 10000);
    std::cout << "Histogram for penalty_d100:" << std::endl;
    print_histogram(penalty_d100, 1, 100, 10000);
    std::cout << "Histogram for bonus_d100:" << std::endl;
    print_histogram(bonus_d100, 1, 100, 10000);

    PenaltyDice penalty_3d6(three_d6);
    BonusDice bonus_3d6(three_d6);
    std::cout << "Histogram for three_d6:" << std::endl;
    print_histogram(three_d6, 3, 18, 10000);
    std::cout << "Histogram for penalty_3d6:" << std::endl;
    print_histogram(penalty_3d6, 3, 18, 10000);
    std::cout << "Histogram for bonus_d100:" << std::endl;
    print_histogram(bonus_3d6, 3, 18, 10000);
    std::cout << " " << std::endl;



    std::cout << "Third task." << std::endl;
    DoubleDice double_dice(d100);
    DoubleDiceWithoutMI double_dice_without_MI(d100);
    std::cout << "One roll for double dice with MI:" << double_dice.roll() << std::endl;
    std::cout << "10000 rolls: " << expected_value(double_dice) << std::endl;

    std::cout << "One roll for double dice without MI:" << double_dice_without_MI.roll() << std::endl;
    std::cout << "10000 rolls: " << expected_value(double_dice_without_MI) << std::endl;

    std::cout << "Histogram for double_dice:" << std::endl;
    print_histogram(double_dice, 1, 100, 10000);
}