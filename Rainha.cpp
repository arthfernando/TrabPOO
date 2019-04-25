#include <iostream>
#include "Rainha.h"

using namespace std;

void Rainha::desenha() {
    (getCor() == 1) ? cout << "Q" : cout << "q";
}

bool Rainha::checaMovimento(int linhaOrg, int colOrg, int linhaDest, int colDest) {
    if(linhaDest >= 0 && colDest <= 7){ //verifica se esta dentro do tabuleiro
        if((linhaDest != linhaOrg) || (colDest != colOrg)) {
            if((linhaDest == linhaOrg)){ //andar pra frente
                return true;
            } else
            if((colDest == colOrg)) {
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

bool Rainha::getCor() {
    return cor;
}

void Rainha::setCor(bool i) {
    cor = i;
}