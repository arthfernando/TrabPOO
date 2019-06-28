#include "Peca.h"
#include <iostream>
using namespace std;

Peca::Peca() {
    id = "";
    cor = 0;
    status = 0;
    moveu = 0;
}

Peca::Peca(string _id, bool c, bool s, bool m) {
    id = _id;
    cor = c;
    status = s;
    moveu = m;
}

void Peca::setPeca(bool c, bool s, bool m){
    cor = c;    //
    status = s; // esta no jogo
    moveu = m;
}


void Peca::setCor(bool c){
    cor = c;
}

// setPegar() {

// }

// getPegar() {

// }
