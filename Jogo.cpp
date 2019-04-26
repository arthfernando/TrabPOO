#include <iostream>
#include "Tabuleiro.h"
#include "Cavalo.h"
//#include "Torre.h"


using namespace std;



int main() {
    Tabuleiro t;
    Cavalo c;
    t.imprimeTabuleiro();
    int a = c.checaMovimento('d',5,'f',1);
    cout << a << endl;

    return 0;
}