#include "Posicao.h"
#include <iostream>

using namespace std;

void Posicao::setCor(int c) {
    cor = c;
}

int Posicao::getCor() {
    return cor;
}

void Posicao::imprimeColuna() {
    for(int i = 0; i < 8; i++) {
        cout << " " << i+1;
    }
}

void Posicao::imprimeLinha(int i) {
    char a = 'a';
    char b = a + i;
    cout << b;
}

void Posicao::setStatus(bool b) {
    status = b;
}

bool Posicao::getStatus() {
    return status;
}