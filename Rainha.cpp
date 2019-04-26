#include <iostream>
#include "Rainha.h"

using namespace std;

void Rainha::desenha() {
    (getCor() == 1) ? cout << "Q" : cout << "q";
}

bool Rainha::checaMovimento(char linhaOrg, int colOrg, char linhaDest, int colDest) {

    int lOrg = linhaOrg - 97;
    int lDest = linhaDest - 97;
    if(lDest >= 0 && colDest <= 7){ //verifica se esta dentro do tabuleiro
        if((lDest != lOrg) || (colDest != colOrg)) {
            if((lDest == lOrg)){ //andar pra frente
                return true;
            } else
            if((colDest == colOrg)) {
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

bool Rainha::getCor() {
    return cor;
}

void Rainha::setCor(bool i) {
    cor = i;
}