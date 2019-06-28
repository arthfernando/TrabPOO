#include <iostream>
#include "Rei.h"

using namespace std;

// Construtor de Rei, recebe dois paramêtros bool (cor e ordem) e passa aos atributos do objeto, junto com status = 1 que indica se a peça está no jogo ou não 
Rei::Rei(bool c, bool o) {
  cor = c;
  ordem = o;
  status = 1;
}

// Retorna letra maiúscula ou minúscula de acordo com a cor da peça (branca = maiúscula, preta = minúscula)
string Rei::desenha() {
     if(getCor()){
      return "K";
  }else{
      return "k";
  }
}

// checaMovimento: recebe posição de origem e destino, cria duas variáveis auxiliares que servem para manter a segurança das variáveis originais, e verifica se o movimento de Rei é valido
bool Rei::checaMovimento(int linhaOrg, int colOrg, int linhaDest, int colDest) {
    int lOrg = linhaOrg;
    int lDest = linhaDest;


    if((lDest >= 0 && lDest <= 7) && (colDest >= 0 && colDest <= 7)){
        if((lDest != lOrg) || (colDest != colOrg)) {
            if((lDest == lOrg) && (abs(colDest - colOrg) == 1)){
                return true;
            } else
            if((colDest == colOrg) && (abs(lDest - lOrg) == 1)) {
                return true;
            } else
            if(abs(lDest-lOrg) == abs((colDest-colOrg))) {
                return true;
            } else {
                return false;
            }
            return true;
        } else {
            return false;
        }
    } else {
        return false;
    }
}

// getCor retorna cor do rei
bool Rei::getCor() {
    return cor;
}

// setCor atribui cor ao rei
void Rei::setCor(bool i) {
    cor = i;
}