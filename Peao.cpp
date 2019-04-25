#include <iostream>
#include "Peao.h"

using namespace std;

string Peao::desenha() {
  (getCor() == 1) ? cout << "P" : cout << "p";
}

bool Peao::checaMovimento(int linhaOrg, int colOrg, int linhaDest, int colDest) {
  if(linhaDest >= 0 && colDest <= 7){ //verifica se esta dentro do tabuleiro
    if((linhaDest == linhaOrg) && (colDest != colOrg)) {  //verifica posicao de movimento
      if((moveu==0)){
        if(cor==1) {  //branca
          if ((colDest-colOrg==2)||(colDest-colOrg==1)){
            moveu = 1;
            return(true);
          } else {
            return(false);
          }
        } else {  //preto
          if((colOrg - colDest == 2) || (colOrg - colDest == 1)) {
            moveu = 1;
            return true;
          } else {
            return false;
          }
        }
      } else {
        if(cor == 1) {
          if(colDest - colOrg == 1) {
            return true;
          } else {
            return false;
          }
        } else {
          if(colOrg - colDest == 1) {
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
}

bool Peao::getCor() {
    return cor;
}

void Peao::setCor(bool i) {
    cor = i;
}
