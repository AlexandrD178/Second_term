//
// Created by alexsvetlichnyy on 02.05.24.
//

#ifndef GLAUBERSAMPLE_GLAUNUCLEON_H
#define GLAUBERSAMPLE_GLAUNUCLEON_H

#include <cmath>

class GlauNucleon {
public:
    GlauNucleon(double x, double y, double z, bool type);

public:
    double x;
    double y;
    double z;
    bool type;
    int nColl;
};

double GetDistance(GlauNucleon n1, GlauNucleon n2);

double GetDistanceXY(GlauNucleon n1, GlauNucleon n2);

#endif //GLAUBERSAMPLE_GLAUNUCLEON_H
