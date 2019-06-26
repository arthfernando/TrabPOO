#ifndef POSICAO_H_
#define POSICAO_H_

#include <iostream>
#include "Peca.h"
class Posicao {
private:
    bool cor; //indica cor da posicao (branca ou preta)
    bool status; //indica se esta ocupada ou nao
    Peca *peca; // indica qual peca esta na posicao --colocar linha e coluna
public:
    Posicao();
    void setCor(int c);
    int getCor();
    void imprimeLinha(int i);
    void imprimeColuna();
    void setStatus(bool b);
    bool getStatus();
    void setPecas(char p);
    char getPecas();
};
#endif