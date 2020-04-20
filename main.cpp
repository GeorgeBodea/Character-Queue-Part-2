#include <iostream>
#include "Nod_simplu.h"
#include "Nod_dublu.h"
#include "Coada_prioritati.h"

using namespace std;

int main() {
    Coada_prioritati p1;

    p1.insereaza( "tata", 3 );
    p1.insereaza("mama", 2);
    p1.insereaza("AICI", 3);
    p1.insereaza("azerty", 6);
    cout<<p1.top()<<endl;
    return 0;
}
