#include <iostream>
#include <fstream>
#include "Coada_prioritati.h"

int main() {
    std::ifstream f("date.in");
    int nr;
    f >> nr;
    Coada_prioritati p;
    for (int i = 0; i < nr; i++)
        f >> p;
    while (p.isEmpty() == false) {
        std::cout << p.get_inceput()->get_prioritate() << " " << p;
        p.pop();
        std::cout << p.isEmpty() << '\n';
    }
    /*
    Coada_prioritati p1;
    f >> p1 >> p1 >> p1;
    Coada_prioritati p2;
    p2 = p1;
    f >> p2;

    std::cout << p2;
    p2.pop();
    std::cout << p2;
    p2.pop();
    std::cout << p2;
    p2.pop();
    std::cout << p2.top();
*/
    f.close();

    return 0;
}
