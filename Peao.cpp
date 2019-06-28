#include <iostream>
#include "Peao.h"

using namespace std;


// Construtor do Peão indica status padrão que não está no jogo.
Peao::Peao(){
  status = 0;
}

// Construtor sobrecarregado do Peão, recebe Cor, Ordem e Status, passando para os atributos do objeto
Peao::Peao(bool c, bool o,bool s) {
  cor = c;
  ordem = o;
  status = s;
}

// Retorna letra maiúscula ou minúscula de acordo com a cor da peça (branca = maiúscula, preta = minúscula)
string Peao::desenha() {
   if(getCor()){
      id = "P";
  }else{
      id = "p";
  }
  return id;
}

// checaMovimento: recebe posição de origem e destino, cria duas variáveis auxiliares que servem para manter a segurança das variáveis originais, e verifica se o movimento do Cavalo é valido
bool Peao::checaMovimento(int linhaOrg, int colOrg, int linhaDest, int colDest) {
  int lOrg = linhaOrg;
  int lDest = linhaDest;
  if(lDest >= 0 && colDest <= 7){
    if((lDest == lOrg) && (colDest != colOrg)) { 
      if((moveu==0)){
        if(cor==1) {
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

// getCor retorna a cor do peao
bool Peao::getCor() {
    return cor;
}

// setCor atribui cor ao peao
void Peao::setCor(bool i) {
    cor = i;
}

// setId atribui um char ao id do Peão
void Peao::setId(char c) {
    id = c;
}

// getId retorna o id do Peão
string Peao::getId() {
    return id;
}

// setStatus atribui um valor indicando se o Peão está no jogo
void Peao::setStatus(bool s) {
    status = s;
}

// getStatus retorna o valor de status do Peão
bool Peao::getStatus() {
    return status;
}

