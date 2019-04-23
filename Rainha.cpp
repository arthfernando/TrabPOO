#include <iostream>
#include "Rainha.h"

using namespace std;

string Rainha::desenha() {
    return "R";
}

void Rainha::checaMovimento(int linhaOrg, int colOrg, int linhaDest, int colDest) {

}

bool Rainha::getCor() {
    return cor;
}

void Rainha::setCor(bool i) {
    cor = i;
}