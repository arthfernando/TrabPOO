#include <iostream>
#include "Torre.h"

Torre::Torre(bool c, bool o,bool s){
    cor = c;
    ordem = o;
    status = s;
}
string Torre::desenha() {
  // imprime maiscula se branca (1) e minuscula se preto (0)
  if(getCor()){
      return "T";
  }else{
      return "t";
  }
}
bool Torre::checaMovimento(int linhaOrg, int colOrg, int linhaDest, int colDest){

    
// armazena char como int para verificar na matriz
    int lOrg = linhaOrg;
    int lDest = linhaDest;

    if((lDest < 0 || lDest >7) || (colDest < 0 || colDest > 7)){//verifica se esta dentro do tabuleiro    
        return false;
    }else{ 
        if(lOrg == lDest && colOrg == colDest){ //verifica se e possivel mover
            return false;
        }else{
            /*Verificacao de movimento*/
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
// retorna cor do bispo
bool Torre::getCor() {
    return cor;
}

// atribui cor ao bispo
void Torre::setCor(bool i) {
    cor = i;
}
