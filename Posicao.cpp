#include "Posicao.h"
#include <iostream>
using namespace std;

// atribui cor a posicao
void Posicao::setCor(int c) {
    cor = c;
}

// retorna cor da posicao
int Posicao::getCor() {
    return cor;
}

// imprime numeros das colunas do --tabuleiro
void Posicao::imprimeColuna() {
    for(int i = 0; i < 8; i++) {
        cout << " " << i+1;
    }
}

// imprime letras das linhas do --tabuleiro
void Posicao::imprimeLinha(int i) {
    char a = 'a';
    char b = a + i;
    cout << b;
}

// atribui status a posicao (ocupada ou nao)
void Posicao::setStatus(bool b) {
    status = b;
}

// retorna se esta ocupada ou nao
bool Posicao::getStatus() {
    return status;
}

// atribui uma peca a posicao
void Posicao::setPecas(char p){

    peca = p;
}

// retorna peca que esta na posicao
char Posicao::getPecas(){
    return peca;
}
