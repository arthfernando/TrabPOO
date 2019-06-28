#include <iostream>
#include "Rei.h"

using namespace std;

Rei::Rei(bool c, bool o) {
  // indica que esta no tabuleiro
  cor = c;
  ordem = o;
  status = 1;
}

string Rei::desenha() {
     if(getCor()){
      return "K";
  }else{
      return "k";
  }
}

bool Rei::checaMovimento(int linhaOrg, int colOrg, int linhaDest, int colDest) {
    // armazena char como int
    int lOrg = linhaOrg;
    int lDest = linhaDest;


    if((lDest >= 0 && lDest <= 7) && (colDest >= 0 && colDest <= 7)){ //verifica se esta dentro do tabuleiro
        if((lDest != lOrg) || (colDest != colOrg)) {
            if((lDest == lOrg) && (abs(colDest - colOrg) == 1)){ //andar pra frente/tras
                return true;
            } else
            if((colDest == colOrg) && (abs(lDest - lOrg) == 1)) { //andar para cima/baixo
                return true;
            } else
            if(abs(lDest-lOrg) == abs((colDest-colOrg))) { //diagonal
                return true;
            } else {
                return false;
            }
            return true;
        } else {
            return false;
        }
    } else {
        return false;
    }
}

// retorna cor do rei
bool Rei::getCor() {
    return cor;
}

// atribui cor ao rei
void Rei::setCor(bool i) {
    cor = i;
}