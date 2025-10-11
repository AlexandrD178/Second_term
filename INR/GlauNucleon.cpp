//
// Created by alexsvetlichnyy on 02.05.24.
//

#include "GlauNucleon.h"

GlauNucleon::GlauNucleon(double x, double y, double z, bool type) : x(x), y(y), z(z), type(type), nColl(0) {}

double GetDistance(GlauNucleon n1, GlauNucleon n2) {
    return std::sqrt((n1.x - n2.x)*(n1.x - n2.x) + (n1.y - n2.y)*(n1.y - n2.y) + (n1.z - n2.z)*(n1.z - n2.z));
}

double GetDistanceXY(GlauNucleon n1, GlauNucleon n2) {
    return std::sqrt((n1.x - n2.x)*(n1.x - n2.x) + (n1.y - n2.y)*(n1.y - n2.y));
}