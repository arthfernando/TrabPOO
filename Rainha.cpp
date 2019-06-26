#include <iostream>
#include "Rainha.h"

using namespace std;

void Rainha::desenha() {
    // imprime maiuscula se branca e minuscula se preta
    (getCor() == 1) ? cout << "Q" : cout << "q";
}

bool Rainha::checaMovimento(char linhaOrg, int colOrg, char linhaDest, int colDest) {
    // armazena char como int para verificar no tabuleiro
    int lOrg = linhaOrg - 97;
    int lDest = linhaDest - 97;

    if((lDest >= 0 && lDest <= 7) && (colDest >= 0 && colDest <= 7)) { //verifica se esta nos limites do tabuleiro
        if((lDest != lOrg) || (colDest != colOrg)) { //verifica se é possivel mover
            if((lDest == lOrg)){ //andar pra frente/tras
                return true;
            } else
            if((colDest == colOrg)) { //andar para baixo/cima
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

// retorna cor da rainha
bool Rainha::getCor() {
    return cor;
}

// atribui cor a rainha
void Rainha::setCor(bool i) {
    cor = i;
}