#include <iostream>
#include "Bispo.h"

using namespace std;

string Bispo::desenha() {
  (getCor() == 1) ? cout << "B" : cout << "b";
}

bool Bispo::checaMovimento(int linhaOrg, int colOrg, int linhaDest, int colDest) {
  if(linhaDest >= 0 && colDest <= 7){ //verifica se esta dentro do tabuleiro
    if((linhaDest != linhaOrg) && (colDest != colOrg)){ //verifica se é possivel mover
      if((linhaDest-linhaOrg)==(colDest-colOrg)) {  //verifica posicao
        return (true);
      } else {
        return (false);
      }
    }
  }
}

bool Bispo::getCor() {
    return cor;
}

void Bispo::setCor(bool i) {
    cor = i;
}
