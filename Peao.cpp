#include <iostream>
#include "Peao.h"

using namespace std;

// Construtor sobrecarregado do Peão, recebe Cor, Ordem e Status, passando para os atributos do objeto
Peao::Peao(bool c, bool o) {
  cor = c;
  ordem = o;
  status = 1;
  if(cor == 1){
      id = 'P';
  }else{
      id = 'p';
  } 
}

// Retorna letra maiúscula ou minúscula de acordo com a cor da peça (branca = maiúscula, preta = minúscula)
char Peao::desenha() {
    if(cor){
        return id;
    }else{
        return id;
    }
}

// checaMovimento: recebe posição de origem e destino, cria duas variáveis auxiliares que servem para manter a segurança das variáveis originais, e verifica se o movimento do Cavalo é valido
bool Peao::checaMovimento(int linhaOrg, int colOrg, int linhaDest, int colDest) {
  int lOrg = linhaOrg;
  int lDest = linhaDest;
  if(lDest >= 0 && colDest <= 7){
    if((lDest == lOrg) && (colDest != colOrg)) { 
      if((moveu==0)){
        if(Peca::getCor()==1) {
          if ((colDest-colOrg==2)||(colDest-colOrg==1)){
            moveu = 1;
            return(true);
          } else {
            return(false);
          }
        } else {
          if((colOrg - colDest == 2) || (colOrg - colDest == 1)) {
            moveu = 1;
            return true;
          } else {
            return false;
          }
        }
      } else {
        if(Peca::getCor() == 1) {
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



