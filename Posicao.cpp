#include "Posicao.h"
#include <iostream>
using namespace std;

Posicao::Posicao(){
    
    ocupado = 0;
    pecas = NULL;
}

void Posicao::setCor(int c){
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
void Posicao::setOcupado(bool b) {
    ocupado = b;
}

// retorna se esta ocupada ou nao
bool Posicao::getOcupado() {
    return ocupado;
}

// atribui uma peca a posicao
void Posicao::setPecas(Peca *p, string s){
    if(p) {
        setOcupado(1);
        pecas = p;
        pecas->setId(s);
    } else {
        setOcupado(0);
        pecas = p;
    }
}

// retorna peca que esta na posicao
Peca* Posicao::getPecas(){

    if(pecas == NULL){
        return NULL;
    }else{
        return pecas;
    }
}

string Posicao::desenhaPos() {
    if(pecas == NULL) {
        return " ";
    } else {
        return pecas->getId();
    }
}


