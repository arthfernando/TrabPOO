#include <iostream>
#include "Peao.h"

using namespace std;

Peao::Peao(){
  status = 0;
}

Peao::Peao(bool c, bool o,bool s) {
  // indica que esta no tabuleiro
  cor = c;
  ordem = o;
  status = s;
}

string Peao::desenha() {
  // imprime maiuscula se branca e minuscula se preta
   if(getCor()){
      // return "P";
      id = "P";
  }else{
      // return "p";
      id = "p";
  }
  return id;
}

bool Peao::checaMovimento(int linhaOrg, int colOrg, int linhaDest, int colDest) {
  int lOrg = linhaOrg;
  int lDest = linhaDest;
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

void Peao::setId(char c) {
    id = c;
}

string Peao::getId() {
    return id;
}

void Peao::setStatus(bool s) {
    status = s;
}

bool Peao::getStatus() {
    return status;
}

