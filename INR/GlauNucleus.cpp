//
// Created by alexsvetlichnyy on 02.05.24.
//

#include "GlauNucleus.h"

GlauNucleus::GlauNucleus(double r, double a, int mass, int charge) : R(r), a(a), A(mass), Z(charge) {
    std::random_device rd;  // Will be used to obtain a seed for the random number engine
    std::mt19937 gen(rd()); // Standard mersenne_twister_engine seeded with rd()
    std::uniform_real_distribution<> nucleonsProposal(-(R + 2 * a), R + 2 * a);
    std::uniform_real_distribution<> un(0., 1.);

    int nprot = 1;
    while(nprot <= Z) {
        double x = nucleonsProposal(gen);
        double y = nucleonsProposal(gen);
        double z = nucleonsProposal(gen);
        double r = x*x + y*y + z*z;
        if (un(gen) < 1./ (1/ + std::exp((r - R)/a))) {
            nucleons.push_back(GlauNucleon(x, y, z, 1));
            nprot++;
        }
    }
    int nneu = 1;
    while(nneu <= A - Z) {
        double x = nucleonsProposal(gen);
        double y = nucleonsProposal(gen);
        double z = nucleonsProposal(gen);
        double r = x*x + y*y + z*z;
        if (un(gen) < 1./ (1. + std::exp((r - R)/a))) {
            nucleons.push_back(GlauNucleon(x, y, z, 0));
            nneu++;
        }
    }
}

GlauNucleus::GlauNucleus(int a, int z) : A(a), Z(z) {}

void GlauNucleus::Move(double x_shift) {
    for(auto iNucl = nucleons.begin(); iNucl != nucleons.end(); ++iNucl){
        iNucl->x += x_shift;
    }
}
