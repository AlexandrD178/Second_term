#include <iostream>
#include "Collider.h"
#include <fstream>
int main() {
    auto nuc1 = GlauNucleus(7., 1., 20, 40);
    auto nuc2 = GlauNucleus(7., 1., 20, 40);
    auto glau = Collider(1.);
    auto fileout = std::ofstream();
    fileout.open("./out.dat");
    fileout<<" NPart \n";
    for(int k = 0; k < 100; k++) {
        glau.Collide(nuc1, nuc2);
        if( glau.getNPartA() + glau.getNPartB()) fileout << glau.getNPartA() + glau.getNPartB() << std::endl;
    }
    fileout.close();
    return 0;
}