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

Nod_simplu* Nod_simplu::get_fiu() {
    return fiu1;
}