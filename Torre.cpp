#include <iostream>
#include "Torre.h"

// Construtor de Torre, recebe dois paramêtros bool (cor e ordem) e passa aos atributos do objeto, junto com status = 1 que indica se a peça está no jogo ou não 
Torre::Torre(bool c, bool o,bool s){
    cor = c;
    ordem = o;
    status = s;
}

// Retorna letra maiúscula ou minúscula de acordo com a cor da peça (branca = maiúscula, preta = minúscula)
string Torre::desenha() {
  if(getCor()){
      return "T";
  }else{
      return "t";
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

// getCor retorna cor do bispo
bool Torre::getCor() {
    return cor;
}

// setCor atribui cor ao bispo
void Torre::setCor(bool i) {
    cor = i;
}
