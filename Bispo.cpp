#include <iostream>
#include "Bispo.h"

using namespace std;

Bispo::Bispo() {
  // indica que esta ocupado
    status = 1;
}

string Bispo::desenha() {
  // imprime maiscula se branca (1) e minuscula se preto (0)
   if(getCor()){
      return "P";
  }else{
      return "p";
  }
}

bool Bispo::checaMovimento(char linhaOrg, int colOrg, char linhaDest, int colDest) {
  // armazena char num int para pegar a posicao na matriz
  int lOrg = linhaOrg - 97;
  int lDest = linhaDest - 97;

  if(lDest >= 0 && colDest <= 7){ //verifica se esta dentro do tabuleiro
    if((lDest != lOrg) && (colDest != colOrg)){ //verifica se é possivel mover
      if((lDest-lOrg)==(colDest-colOrg)) {  //verifica posicao de destino
        return (true);
      } else {
        return (false);
      }
    }
    return false;
  }
  return false;
}

// retorna cor do bispo
bool Bispo::getCor() {
    return cor;
}

// atribui cor ao bispo
void Bispo::setCor(bool i) {
    cor = i;
}
