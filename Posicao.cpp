#include "Posicao.h"
#include <iostream>
using namespace std;

// Construtor padrão de Posicao, inicia os atributos como 0 e NULL, indicando que estão vazios
Posicao::Posicao(){
    ocupado = 0;
    pecas = NULL;
}

// setCor atribui cor a Posicao
void Posicao::setCor(int c){
    cor = c;
}

// getCor retorna cor da posicao
int Posicao::getCor() {
    return cor;
}

// setOcupado atribui status a posicao (ocupada ou nao)
void Posicao::setOcupado(bool b) {
    ocupado = b;
}

// getOcupado retorna se esta ocupada ou nao
bool Posicao::getOcupado() {
    return ocupado;
}

// setPecas atribui uma peca a posicao
void Posicao::setPecas(Peca *p, char s){
    if(p) {
        setOcupado(1);
        pecas = p;
        pecas->setId(s);
    } else {
        setOcupado(0);
        pecas = p;
    }
}

// getPecas retorna peca que esta na posicao
Peca* Posicao::getPecas(){

    if(pecas == NULL){
        return NULL;
    }else{
        return pecas;
    }
}

// desenha a peca que está na Posicao
char Posicao::desenhaPos() {
    if(pecas == NULL) {
        return '\0';
    } else {
        return pecas->getId();
    }
}


