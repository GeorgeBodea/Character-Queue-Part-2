//
// Created by George on 4/18/2020.
//

#ifndef TEMA_POO_2_NOD_SIMPLU_H
#define TEMA_POO_2_NOD_SIMPLU_H

#include <iostream>

class Nod_simplu{
protected:
    Nod_simplu* fiu1;

public:
    Nod_simplu();
    virtual ~Nod_simplu();
    Nod_simplu* get_fiu();

};

#endif //TEMA_POO_2_NOD_SIMPLU_H
