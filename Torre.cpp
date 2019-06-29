#include <iostream>
#include "Torre.h"

// Construtor de Torre, recebe dois paramêtros bool (cor e ordem) e passa aos atributos do objeto, junto com status = 1 que indica se a peça está no jogo ou não 
Torre::Torre(bool c, bool o){
  cor = c;
  ordem = o;
  status = 1;
  if(cor == 1){
      id = 'T';
  }else{
      id = 't';
  }
    
}

// Retorna letra maiúscula ou minúscula de acordo com a cor da peça (branca = maiúscula, preta = minúscula)
char Torre::desenha() {
  if(cor){
        return id;
    }else{
        return id;
  }
}

// checaMovimento: recebe posição de origem e destino, cria duas variáveis auxiliares que servem para manter a segurança das variáveis originais, e verifica se o movimento da Torre é valido
bool Torre::checaMovimento(int linhaOrg, int colOrg, int linhaDest, int colDest){
    int lOrg = linhaOrg;
    int lDest = linhaDest;

    if((lDest < 0 || lDest >7) || (colDest < 0 || colDest > 7)){
        return false;
    }else{ 
        if(lOrg == lDest && colOrg == colDest){
            return false;
        }else{
            if(lOrg == lDest ){
                moveu = 1;
                return true;
            }
            else if(colOrg == colDest){
                moveu = 1;
                return true;
            }
        }
        return false;
    }

}

