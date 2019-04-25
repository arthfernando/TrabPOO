#include <iostream>
#include "Bispo.h"

using namespace std;

string Bispo::desenha() {
    return "B";
}

void Bispo::checaMovimento(int linhaOrg, int colOrg, int linhaDest, int colDest) {
    if((linhaDest-linhaOrg)==(colDest-colOrg)){
      return (true);
    }
    else{
      return (false);
    }
}

bool Bispo::getCor() {
    return cor;
}

void Bispo::setCor(bool i) {
    cor = i;
}
