//
// Created by George on 4/18/2020.
//

#include "Nod_simplu.h"
#include <cstring>

Nod_simplu::Nod_simplu() {
    fiu1 = nullptr;

}

Nod_simplu::~Nod_simplu() {
    fiu1 = nullptr;
}

void Nod_simplu::set_fiu(Nod_simplu *nod) {
    fiu1 = nod;
};


Nod_simplu *Nod_simplu::get_fiu() {
    return fiu1;
}

Nod_simplu &Nod_simplu::operator=(const Nod_simplu &nod_primit) {
    std::cout << "Nu avem ce informatii sa copiem.";
    return *this;
}