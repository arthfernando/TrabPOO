#include <iostream>
#include "Bispo.h"

using namespace std;

void Bispo::desenha() {
  (getCor() == 1) ? cout << "B" : cout << "b";
}

bool Bispo::checaMovimento(char linhaOrg, int colOrg, char linhaDest, int colDest) {
  int lOrg = linhaOrg - 97;
  int lDest = linhaDest - 97;
  if(lDest >= 0 && colDest <= 7){ //verifica se esta dentro do tabuleiro
    if((lDest != lOrg) && (colDest != colOrg)){ //verifica se é possivel mover
      if((lDest-lOrg)==(colDest-colOrg)) {  //verifica posicao
        return (true);
      } else {
        return (false);
      }
    }
    return false;
  }
  return false;
}

bool Bispo::getCor() {
    return cor;
}

void Bispo::setCor(bool i) {
    cor = i;
}
