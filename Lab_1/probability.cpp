#include "probability.h"
#include <iostream>

double value_probability(unsigned value, Rollable &d, unsigned number_of_rolls) {
    unsigned count = 0;
    for(auto i = 0; i < number_of_rolls; i++) {
        if (d.roll() == value) {count++;}
    }
    return static_cast<double>(count) / number_of_rolls;
}

void print_histogram(Rollable &d, unsigned min_value, unsigned max_value, unsigned number_of_rolls) {
    for (unsigned i = min_value; i <= max_value; i++) {
        double prob = value_probability(i, d, number_of_rolls);
        std::cout<< i << ":" << prob << std::endl;
    }
}