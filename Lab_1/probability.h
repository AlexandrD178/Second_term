#pragma once
# include "Rollable.h"

double value_probability(unsigned value, Rollable &d, unsigned number_of_rolls = 10000);

void print_histogram(Rollable &d, unsigned min_value, unsigned max_value, unsigned number_of_rolls = 10000);