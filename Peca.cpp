#include "Peca.h"
#include <iostream>
using namespace std;

// Construtor padrão de Peca, inicia os atributos como 0
Peca::Peca() {
    id = '\0';
    cor = 0;
    status = 0;
    moveu = 0;
}

// Construtor sobrecarregado de Peca, recebe id, cor, status, e s foi movido ou não para atribuir aos atributos do objeto em questão
Peca::Peca(char _id, bool c, bool s, bool m) {
    id = _id;
    cor = c;
    status = s;
    moveu = m;
}

// setPeca recebe cor, status e se foi movido ou não e passa para os atributos do objeto em questão
void Peca::setPeca(bool c, bool s, bool m){
    cor = c;    //
    status = s; // esta no jogo
    moveu = m;
}

// setCor recebe cor e passa para o objeto
void Peca::setCor(bool c){
    cor = c;
}

// getId retorna o id do objeto
char Peca::getId() {
    return id;
}

// setId recebe um char e passa para o id do objeto
void Peca::setId(char s) {
    id = s;
}

// setStatus recebe um valor booleano (indicando se está no jogo) e atribui ao status do objeto
void Peca::setStatus(bool s){
    status = s;
}

// getStatus retorna status do objeto
bool Peca::getStatus(){
    return status;
}
