//
// Created by alexsvetlichnyy on 02.05.24.
//

#include "Collider.h"


Collider::Collider(double sigNn) : sigNN(sigNn), nPartA (0), nPartB(0), nCollA(0), nCollB(0) {}

void Collider::Collide(GlauNucleus nuc1, GlauNucleus nuc2) {
    std::random_device rd;  // Will be used to obtain a seed for the random number engine
    std::mt19937 gen(rd()); // Standard mersenne_twister_engine seeded with rd()
    auto bmax = nuc1.R + nuc2.R + (nuc1.a + nuc2.a);
    std::uniform_real_distribution<> bdist(0., bmax);
    std::uniform_real_distribution<> un(0., 1.);

    auto flg = false;
    auto b = 0;
    while(!flg){
        b = bdist(gen);
        if (un(gen) < 2*b/bmax*bmax) {flg = true;}
    }
    this->Collide(nuc1, nuc2, b);
}

void Collider::Collide(GlauNucleus nuc1, GlauNucleus nuc2, double b) {
    nCollA = 0; nCollB = 0; nPartA = 0; nPartB = 0;

    nuc1.Move(-b/2.);
    nuc2.Move(b/2.);

    for (auto iNucl1 = nuc1.nucleons.begin(); iNucl1 != nuc1.nucleons.end(); iNucl1++) {
        for (auto iNucl2 = nuc2.nucleons.begin(); iNucl2 != nuc2.nucleons.end(); iNucl2++) {
            if (GetDistanceXY (*iNucl1, *iNucl2) < std::sqrt(sigNN/3.141592)) {
                iNucl1 -> nColl++;
                iNucl2 -> nColl++;
            }
        }
    }

    for (auto iNucl1 = nuc1.nucleons.begin(); iNucl1 != nuc1.nucleons.end(); iNucl1++) {
        nCollA += iNucl1->nColl;
        if (iNucl1->nColl > 0) nPartA++;
    }
    for (auto iNucl2 = nuc2.nucleons.begin(); iNucl2 != nuc2.nucleons.end(); iNucl2++) {
        nCollB += iNucl2->nColl;
        if (iNucl2->nColl > 0) nPartB++;
    }

}

double Collider::getNCollA() const {
    return nCollA;
}

double Collider::getNPartA() const {
    return nPartA;
}

double Collider::getNCollB() const {
    return nCollB;
}

double Collider::getNPartB() const {
    return nPartB;
}
