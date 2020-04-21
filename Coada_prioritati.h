//
// Created by George on 4/18/2020.
//

#ifndef TEMA_POO_2_COADA_PRIORITATI_H
#define TEMA_POO_2_COADA_PRIORITATI_H

#include "Nod_dublu.h"
#include <cmath>
#include <functional>

class Coada_prioritati {
private:
    Nod_simplu* inceput;
    int numar_elemente;
    void ultimul_element( Nod_dublu*& tata, int& last_move );
    void deep_copy(const Coada_prioritati& coada_noua);
public:
    Coada_prioritati();
    void insereaza(const char* info, int prioritate);
    char* top();
    void pop();
    ~Coada_prioritati();
    void empty();
    Coada_prioritati& operator = (const Coada_prioritati& coada_noua);
};

#endif //TEMA_POO_2_COADA_PRIORITATI_H
