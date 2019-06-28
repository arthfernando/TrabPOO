#include "Peca.h"
#include <iostream>
using namespace std;

Peca::Peca() {
    id = '\0';
    cor = 0;
    status = 0;
    moveu = 0;
}

Peca::Peca(char _id, bool c, bool s, bool m) {
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

char Peca::getId() {
    return id;
}

void Peca::setId(char s) {
    id = s;
}

void Peca::setStatus(bool s){
    status = s;
}
bool Peca::getStatus(){

    return status;
}
