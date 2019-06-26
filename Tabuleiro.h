#ifndef TABULEIRO_H_
#define TABULEIRO_H_

#include <iostream>
#include "Posicao.h"

class Tabuleiro {
private:
    Posicao tabuleiro[8][8];
   
public:
    Tabuleiro();
    void imprimeTabuleiro();
    
};
#endif