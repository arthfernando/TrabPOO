#include <iostream>
#include "Bispo.h"

using namespace std;

// Construtor de Bispo, recebe dois paramêtros bool (cor e ordem) e passa aos atributos do objeto, junto com status = 1 que indica se a peça está no jogo ou não 
Bispo::Bispo(bool c, bool o) {
  cor = c;
  ordem = o;
  status = 1;
  if(cor == 1){
      id = 'B';
  }else{
      id = 'b';
  }  
}

// Retorna letra maiúscula ou minúscula de acordo com a cor da peça (branca = maiúscula, preta = minúscula)
char Bispo::desenha() {
    if(cor){
        return id;
    }else{
        return id;
    }
}

// checaMovimento: recebe posição de origem e destino, cria duas variáveis auxiliares que servem para manter a segurança das variáveis originais, e verifica se o movimento do Bispo é valido
bool Bispo::checaMovimento(int linhaOrg, int colOrg, int linhaDest, int colDest) {
  int lOrg = linhaOrg;
  int lDest = linhaDest;

  if(lDest >= 0 && colDest <= 7){ 
    if((lDest != lOrg) && (colDest != colOrg)){
      if((lDest-lOrg)==(colDest-colOrg)) {
        return (true);
      } else {
        return (false);
      }
    }
    return false;
  }
  return false;
}

