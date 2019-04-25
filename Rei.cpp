#include <iostream>
#include "Rei.h"

using namespace std;

void Rei::desenha() {
    (getCor() == 1) ? cout << "K" : cout << "k";
}

bool Rei::checaMovimento(int linhaOrg, int colOrg, int linhaDest, int colDest) {
    if(linhaDest >= 0 && colDest <= 7){ //verifica se esta dentro do tabuleiro
        if((linhaDest != linhaOrg) || (colDest != colOrg)) {
            if((linhaDest == linhaOrg) && (abs(colDest - colOrg) == 1)){ //andar pra frente
                return true;
            } else
            if((colDest == colOrg) && (abs(linhaDest - linhaOrg) == 1)) {
                return true;
            } else
            if(abs(linhaDest-linhaOrg) == abs((colDest-colOrg))) {
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