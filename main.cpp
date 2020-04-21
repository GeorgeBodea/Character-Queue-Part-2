#include <iostream>
#include "Nod_simplu.h"
#include "Nod_dublu.h"
#include "Coada_prioritati.h"

using namespace std;

int main() {
    Coada_prioritati p1;
    cin >> p1 >> p1 >> p1;
    Coada_prioritati p2;
    p2 = p1;

    cout << p2.top() << endl;
    cout << p2;
    p2.pop();
    cout << p2.top();
    p2.pop();
    cout << p2.top();
    p2.pop();
    cout << p2.top();
    return 0;
}
