#include <iostream>
#include "Rei.h"

using namespace std;

void Rei::desenha() {
    (getCor() == 1) ? cout << "K" : cout << "k";
}

bool Rei::checaMovimento(char linhaOrg, int colOrg, char linhaDest, int colDest) {
    int lOrg = linhaOrg - 97;
    int lDest = linhaDest - 97;
    if(lDest >= 0 && colDest <= 7){ //verifica se esta dentro do tabuleiro
        if((lDest != lOrg) || (colDest != colOrg)) {
            if((lDest == lOrg) && (abs(colDest - colOrg) == 1)){ //andar pra frente
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

bool Rei::getCor() {
    return cor;
}

void Rei::setCor(bool i) {
    cor = i;
}