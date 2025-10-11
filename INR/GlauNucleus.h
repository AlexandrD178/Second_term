//
// Created by alexsvetlichnyy on 02.05.24.
//

#ifndef GLAUBERSAMPLE_GLAUNUCLEUS_H
#define GLAUBERSAMPLE_GLAUNUCLEUS_H

#include <vector>
#include "GlauNucleon.h"
#include "random"
#include <cmath>
#include <iostream>

class GlauNucleus {
public:
    GlauNucleus(double r, double a, int a1, int z);
    GlauNucleus(int a, int z);
    void Move(double x_shift);

public:
    std::vector<GlauNucleon> nucleons;
    double R;
    double a;
    int A;
    int Z;
};


#endif //GLAUBERSAMPLE_GLAUNUCLEUS_H