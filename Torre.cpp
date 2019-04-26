#include <iostream>
#include "Torre.h"

Torre::Torre(){
    /*ocupada*/
    status = 1;
}
bool Torre::checaMovimento(char linhaOrg, int colOrg, char linhaDest, int colDest){

    int lOrg = linhaOrg - 97;
    int lDest = linhaDest - 97;

    if((lDest < 0 || lDest >7) || (colDest < 0 || colDest > 7)){//verifica se esta dentro do tabuleiro    
        return false;
    }else{ 
        if(lOrg == lDest && colOrg == colDest){
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
