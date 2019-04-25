#include <iostream>
#include "Tabuleiro.h"
// #include "Rei.h"


using namespace std;



int main() {
    Tabuleiro t;
    Rei k;
    t.inicio(1);
    t.imprimeTabuleiro();
    int a = k.checaMovimento(3,0,3,0);
    cout << a << endl;

    return 0;
}