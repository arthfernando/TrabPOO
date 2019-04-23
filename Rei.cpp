#include <iostream>
#include "Rei.h"

using namespace std;

string Rei::desenha() {
    return "R";
}

void Rei::checaMovimento(int linhaOrg, int colOrg, int linhaDest, int colDest) {
    if(linhaDest == linhaOrg + 1 && linhaDest >= 0) {
           
    }
}

bool Rei::getCor() {
    return cor;
}

void Rei::setCor(bool i) {
    cor = i;
}