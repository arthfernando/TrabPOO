#ifndef POSICAO_H_
#define POSICAO_H_

#include <iostream>
#include "Peca.h"
class Posicao {
private:

    bool cor; //indica cor da posicao (branca ou preta)
    bool ocupado; //indica se esta ocupada ou nao
    Peca *pecas; // indica qual peca esta na posicao --colocar linha e coluna
public:
    Posicao();
    void setCor(int c);
    int getCor();
    void imprimeLinha(int i);
    void imprimeColuna();
    void setOcupado(bool b);
    bool getOcupado();
    
    void setPecas(Peca *p, string s);
    Peca *getPecas();

    string desenhaPos();

};
#endif