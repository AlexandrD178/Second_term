//
// Created by alexsvetlichnyy on 02.05.24.
//

#ifndef GLAUBERSAMPLE_COLLIDER_H
#define GLAUBERSAMPLE_COLLIDER_H
#include "GlauNucleus.h"

class Collider {
public:
    Collider(double sigNn);

    void Collide(GlauNucleus nuc1, GlauNucleus nuc2);
    void Collide(GlauNucleus nuc1, GlauNucleus nuc2, double b);

private:
    double sigNN;

public:
    double getNCollA() const;

    double getNPartA() const;

    double getNCollB() const;

    double getNPartB() const;

private:
    int nCollA;
    int nPartA;
    int nCollB;
    int nPartB;
};


#endif //GLAUBERSAMPLE_COLLIDER_H