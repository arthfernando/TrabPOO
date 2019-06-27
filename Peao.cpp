#include <iostream>
#include "Peao.h"

using namespace std;

Peao::Peao(bool c, bool o) {
  // indica que esta no tabuleiro
  cor = c;
  ordem = o;
}

string Peao::desenha() {
  // imprime maiuscula se branca e minuscula se preta
   if(getCor()){
      return "P";
  }else{
      return "p";
  }
}

bool Peao::checaMovimento(char linhaOrg, int colOrg, char linhaDest, int colDest) {
  int lOrg = linhaOrg - 97;
  int lDest = linhaDest - 97;
  if(lDest >= 0 && colDest <= 7){ //verifica se esta dentro do tabuleiro --tabuleiro
    if((lDest == lOrg) && (colDest != colOrg)) {  //verifica posicao de movimento
      if((moveu==0)){
        if(cor==1) {  //se peca branca
          if ((colDest-colOrg==2)||(colDest-colOrg==1)){
            moveu = 1;
            return(true);
          } else {
            return(false);
          }
        } else {  //se peca preto
          if((colOrg - colDest == 2) || (colOrg - colDest == 1)) {
            moveu = 1;
            return true;
          } else {
            return false;
          }
        }
      } else { // verificacao de movimento apos a primeira jogada
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
  return false; 
}

// retorna a cor do peao
bool Peao::getCor() {
    return cor;
}

// atribui cor ao peao
void Peao::setCor(bool i) {
    cor = i;
}
