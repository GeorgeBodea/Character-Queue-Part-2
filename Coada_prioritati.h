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
    Nod_dublu *inceput;
    int numar_elemente;

    void ultimul_element(Nod_dublu *&tata, int &last_move);

    Nod_dublu *deep_copy(Nod_dublu *nod_de_copiat, const Nod_dublu *tata);

    void coboara(Nod_dublu *nod);

public:
    Coada_prioritati();

    void insereaza(const char *info, int prioritate);

    char *top();

    void pop();

    Nod_dublu *get_inceput();

    bool isEmpty();

    void empty();

    Coada_prioritati &operator=(const Coada_prioritati &coada_noua);

    ~Coada_prioritati();

    friend std::istream &operator>>(std::istream &input, Coada_prioritati &coada);

    friend std::ostream &operator<<(std::ostream &output, Coada_prioritati &coada);
};

#endif //TEMA_POO_2_COADA_PRIORITATI_H
