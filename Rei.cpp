#include <iostream>
#include "Rei.h"

using namespace std;

void Rei::desenha() {
    // imprime maiuscula se branca e minuscula se preta
    (getCor() == 1) ? cout << "K" : cout << "k";
}

bool Rei::checaMovimento(char linhaOrg, int colOrg, char linhaDest, int colDest) {
    // armazena char como int
    int lOrg = linhaOrg - 97;
    int lDest = linhaDest - 97;


    if((lDest >= 0 && lDest <= 7) && (colDest >= 0 && colDest <= 7)){ //verifica se esta dentro do tabuleiro
        if((lDest != lOrg) || (colDest != colOrg)) {
            if((lDest == lOrg) && (abs(colDest - colOrg) == 1)){ //andar pra frente/tras
                return true;
            } else
            if((colDest == colOrg) && (abs(lDest - lOrg) == 1)) { //andar para cima/baixo
                return true;
            } else
            if(abs(lDest-lOrg) == abs((colDest-colOrg))) { //diagonal
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

// retorna cor do rei
bool Rei::getCor() {
    return cor;
}

// atribui cor ao rei
void Rei::setCor(bool i) {
    cor = i;
}