//
// Created by George on 4/18/2020.
//

#ifndef TEMA_POO_2_NOD_DUBLU_H
#define TEMA_POO_2_NOD_DUBLU_H

#include "Nod_simplu.h"
#include <iostream>
#include <cstring>


class Nod_dublu: public Nod_simplu {
    Nod_dublu* anterior;
    Nod_dublu* fiu2;
    int prioritate;
    char *info;
public:
    explicit Nod_dublu (const char* text = "", int val = 0);
    ~Nod_dublu () override;
    Nod_dublu* get_fiu(int nr_fiu);
    void set_fiu( Nod_dublu* nod, int nr_fiu );
    int get_prior();
    char* get_info();
    void set_tata( Nod_dublu* tata );
    Nod_dublu* get_tata();
    Nod_dublu& operator = (const Nod_dublu& nod);
    friend void urca( Nod_dublu* nod_de_inserat, Nod_simplu* inceput );
    friend void coboara( Nod_dublu* nod );
    friend void swap_valori( Nod_dublu* nod1, Nod_dublu* nod2 );
};


#endif //TEMA_POO_2_NOD_DUBLU_H
