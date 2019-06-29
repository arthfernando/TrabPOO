#include <iostream>
#include "Cavalo.h"


// Construtor de Cavalo, recebe dois paramêtros bool (cor e ordem) e passa aos atributos do objeto, junto com status = 1 que indica se a peça está no jogo ou não 
Cavalo::Cavalo(bool c, bool o){
    cor = c;
    ordem = o;
    status = 1;
    if(cor == 1){
      id = 'C';
    }else{
      id = 'c';
    } 
}

// Retorna letra maiúscula ou minúscula de acordo com a cor da peça (branca = maiúscula, preta = minúscula)
char Cavalo::desenha() {
   if(cor){
        return id;
    }else{
        return id;
  }
}

// funcao modulo, retorna um valor positivo (> 0) mesmo se o número for negativo
int Cavalo::modulo(int x){
    if(x < 0){
        return x * (-1); 
    }else{
        return x;
    }
}

// checaMovimento: recebe posição de origem e destino, cria duas variáveis auxiliares que servem para manter a segurança das variáveis originais, e verifica se o movimento do Cavalo é valido
bool Cavalo::checaMovimento(int linhaOrg, int colOrg, int linhaDest, int colDest){
    // armazena char como int para identificar posicao na matriz
    int lOrg = linhaOrg;
    int lDest = linhaDest;

    if((lDest < 0 || lDest >7) || (colDest < 0 || colDest > 7)){ 
        return false;
    }else{ 
        if(lOrg == lDest && colOrg == colDest){
            return false;
        }else{
            if(modulo(lOrg - lDest) == 1 && modulo(colOrg - colDest) == 2){
                return true;
            }
            else if(modulo(lOrg - lDest) == 2 && modulo(colOrg - colDest) == 2){
                return true;
            }
            else if(modulo(lOrg - lDest) == 2 && modulo(colOrg - colDest) == 1){
                return true;
            }
        }
        return false;
    }

}

