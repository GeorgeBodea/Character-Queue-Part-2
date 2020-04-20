//
// Created by George on 4/18/2020.
//

#ifndef TEMA_POO_2_COADA_PRIORITATI_H
#define TEMA_POO_2_COADA_PRIORITATI_H

#include "Nod_dublu.h"
#include <cmath>

class Coada_prioritati {
    Nod_simplu* inceput;
    int numar_elemente;
    void ultimul_element( Nod_dublu*& tata, int& last_move );
public:
    Coada_prioritati();
    void insereaza(const char* info, int prioritate);
    char* top();
    void pop();
};

#endif //TEMA_POO_2_COADA_PRIORITATI_H
