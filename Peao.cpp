#include <iostream>
#include "Peao.h"

using namespace std;

void Peao::desenha() {
  (getCor() == 1) ? cout << "P" : cout << "p";
}

bool Peao::checaMovimento(char linhaOrg, int colOrg, char linhaDest, int colDest) {
  int lOrg = linhaOrg - 97;
  int lDest = linhaDest - 97;
  if(lDest >= 0 && colDest <= 7){ //verifica se esta dentro do tabuleiro
    if((lDest == lOrg) && (colDest != colOrg)) {  //verifica posicao de movimento
      if((moveu==0)){
        if(cor==1) {  //branca
          if ((colDest-colOrg==2)||(colDest-colOrg==1)){
            cout << "passou 1" << endl;
            moveu = 1;
            return(true);
          } else {
            return(false);
          }
        } else {  //preto
          if((colOrg - colDest == 2) || (colOrg - colDest == 1)) {
            moveu = 1;
            cout << "passou 2" << endl;
            return true;
          } else {
            return false;
          }
        }
      } else {
        if(cor == 1) {
          if(colDest - colOrg == 1) {
            cout << "passou 3" << endl;
            return true;
          } else {
            return false;
          }
        } else {
          if(colOrg - colDest == 1) {
            cout << "passou 4" << endl;
            return true;
          } else {
            return false;
          }
        }
      }
      return false;
    }
    return false;
  }
  return false; 
}

bool Peao::getCor() {
    return cor;
}

void Peao::setCor(bool i) {
    cor = i;
}
