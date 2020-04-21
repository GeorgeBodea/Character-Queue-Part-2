//
// Created by George on 4/18/2020.
//

#include "Coada_prioritati.h"

Coada_prioritati::Coada_prioritati()
{
    numar_elemente = 0;
    inceput = new Nod_simplu;
};

void Coada_prioritati::ultimul_element( Nod_dublu*& tata, int& last_move ) { // Trebuie sa stim tatal si ultima miscare inainte sa adaugam un nod.

    tata = (inceput->get_fiu() != nullptr) ? static_cast<Nod_dublu *>(inceput->get_fiu()) : static_cast<Nod_dublu *>(inceput);
    // Daca respectiva coada are doar nodul vid, atunci tatal e nodul vid
    //, altfel luam  radacina cu nodul dublu si incepem sa parcurgem arborele

    last_move = 1;
    Nod_dublu* nod_curent = static_cast<Nod_dublu *>(inceput->get_fiu());

    unsigned s = 1 << ( (int)log2(numar_elemente) ); // parte intreaga log 2 n ??? POSIBILITATE REDUSA avem numar_elemente 4, s=>4 .
    unsigned p2 = s >> 1; // am imp cu 2 pt. pt ca prima cifra nu ne spune nimic despre subarbore

    while ( nod_curent != nullptr && s != numar_elemente )
    {
        if ( s + p2 <= numar_elemente ){
            nod_curent = nod_curent->get_fiu(2);
            s += p2;
            last_move = 2;
        }
        else {
            nod_curent = static_cast<Nod_dublu *>(nod_curent->get_fiu(1));
            last_move = 1;
        }
        if ( nod_curent != nullptr )
            tata = nod_curent;
        p2 >>= 1;
    }
}

void Coada_prioritati::insereaza(const char *info, int prioritate)
{

    numar_elemente++;

    // De exemplu 13 = 8 + 4 + 1 si daca facem impartirea cifre 1 care ii corespunde lui 8 in scrierea lui 13 e inutila
    Nod_dublu* tata;
    int last_move;
    ultimul_element( tata, last_move ); // tata va primi informatia despre care este nodul subarborelui unde trb adaugat ultimul nod
                                               // ,iar last_move unde trebuie adaugat nodul (stanga sau dreapta)

    Nod_dublu* nod_de_inserat = new Nod_dublu( info, prioritate );
    tata->set_fiu(nod_de_inserat, last_move);
    nod_de_inserat->set_tata(tata);
    ///interschimbam cu tatal cat timp avem prioritate mai mare in nod curent
    urca( nod_de_inserat, inceput );
}
char* Coada_prioritati::top() {
    try {
        if (numar_elemente==0)
            throw std::bad_function_call();
        Nod_dublu *nod = static_cast<Nod_dublu *>(inceput->get_fiu());
        return nod->get_info();
    }
    catch(const std::bad_function_call &e) {
        return const_cast<char *>(e.what());
    }
}

void Coada_prioritati::pop() {
    try {

        if (numar_elemente == 1) {
            delete inceput->get_fiu();
            inceput->set_fiu(nullptr);
            numar_elemente--;
        }
        else if( numar_elemente > 1 ) {
            Nod_dublu *tata;
            int last_move;
            ultimul_element(tata, last_move);
            Nod_dublu *nod_curent = static_cast<Nod_dublu *>(inceput->get_fiu());

            *nod_curent = *(tata->get_fiu(last_move));
            delete tata->get_fiu(last_move);
            tata->set_fiu(nullptr, last_move);
            coboara(nod_curent);
            numar_elemente--;
        } else
            throw std::bad_function_call();
    }
    catch (const std::bad_function_call &e ) {
        std::cout<<e.what();
    }
}

Coada_prioritati::~Coada_prioritati(){
    empty();
    delete inceput;
}

void Coada_prioritati::empty(){
    while(numar_elemente>0){
        pop();
    }
}

Coada_prioritati& Coada_prioritati:: operator = (const Coada_prioritati& coada_nou){
    empty(); // empty lasa doar radacina.

}