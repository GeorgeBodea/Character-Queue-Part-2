#include <iostream>
#include "Nod_simplu.h"
#include "Nod_dublu.h"
#include "Coada_prioritati.h"

using namespace std;

int main() {
    Coada_prioritati p1;

    p1.insereaza( "tata", 3 );
    p1.pop();

    cout<<p1.top();
    return 0;
}
