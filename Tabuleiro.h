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
    void verPeca(int lOrg, int cOrg, int lDest, int cDest);  
    void atualizarTabuleiro(int lOrg, int cOrg, int lDest, int cDest);
    void atualizarTabuleiroComido(int lOrg, int cOrg, int lDest, int cDest);
    bool checagemMovimentoBrancas(Peca *org,int lOrg,int cOrg,int lDest,int cDest);
    bool checagemMovimentoPretas(Peca *org,int lOrg,int cOrg,int lDest,int cDest);
    
};
#endif