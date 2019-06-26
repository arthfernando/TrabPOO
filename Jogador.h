#ifndef JOGADOR_H_
#define JOGADOR_H_

#include "Peca.h"

using std::string;

class Jogador {
private:
    Peca *pecas[16];
    string nome;
    int ordem;

public:
    Jogador();
    void setPlayer(string nome1,int ord);
    void imprimir();
};
#endif