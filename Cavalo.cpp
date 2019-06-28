#include <iostream>
#include "Cavalo.h"

Cavalo::Cavalo(bool c, bool o){
    /*ocupada*/
    ordem = o;
    cor = c;
    status = 1;
}

string Cavalo::desenha() {
    // imprime maiuscula se branca e minuscula se preta
   if(getCor()){
      return "C";
  }else{
      return "c";
  }
}

// funcao modulo
int Cavalo::modulo(int x){
    if(x < 0){
        return x * (-1); 
    }else{
        return x;
    }
}

bool Cavalo::checaMovimento(int linhaOrg, int colOrg, int linhaDest, int colDest){
    // armazena char como int para identificar posicao na matriz
    int lOrg = linhaOrg;
    int lDest = linhaDest;

    if((lDest < 0 || lDest >7) || (colDest < 0 || colDest > 7)){ //verifica se esta dentro do tabuleiro    
        return false;
    }else{ 
        if(lOrg == lDest && colOrg == colDest){ // verifica se nao é possivel mover
            return false;
        }else{
            /*coluna interna*/
            if(modulo(lOrg - lDest) == 1 && modulo(colOrg - colDest) == 2){
                moveu = 1;
                return true;
            }
            /*coluna externa*/
            else if(modulo(lOrg - lDest) == 2 && modulo(colOrg - colDest) == 2){
                moveu = 1;
                return true;
            }
            else if(modulo(lOrg - lDest) == 2 && modulo(colOrg - colDest) == 1){
                moveu = 1;
                return true;
            }
        }
        return false;
    }

}

//retorna cor do cavalo
bool Cavalo::getCor() {
    return cor;
}

// atribui cor ao cavalo
void Cavalo::setCor(bool b) {
    cor = b;
}
