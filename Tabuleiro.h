#ifndef TABULEIRO_H_
#define TABULEIRO_H_

#include <iostream>
#include "Posicao.h"
#include "Peca.h"

class Tabuleiro {
private:
    Posicao tabuleiro[8][8];
   
public:
    Tabuleiro();
    Tabuleiro(Peca *peca[32]);
    void imprimeTabuleiro();
    
};
#endif