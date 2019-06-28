#include "Tabuleiro.h"
#include "Posicao.h"
#include <iostream>

using namespace std;


Tabuleiro::Tabuleiro(){

}

Tabuleiro::Tabuleiro(Peca *peca[32]) {
           
    // indica cor das casas do tabuleiro
    for(int i = 0; i < 8; i++) {
        for(int j = 0; j < 8; j++) {
            ((i+j)%2 == 0) ? tabuleiro[i][j].setCor(0) : tabuleiro[i][j].setCor(1);
    
        }
    }

// inicia pecas brancas na posicao inicial padrao
    tabuleiro[0][0].setPecas(peca[8]); 
    tabuleiro[1][0].setPecas(peca[9]);
    tabuleiro[2][0].setPecas(peca[10]);
    tabuleiro[3][0].setPecas(peca[11]);
    tabuleiro[4][0].setPecas(peca[12]);
    tabuleiro[5][0].setPecas(peca[13]);
    tabuleiro[6][0].setPecas(peca[14]);
    tabuleiro[7][0].setPecas(peca[15]);

    tabuleiro[0][1].setPecas(peca[0]);
    tabuleiro[1][1].setPecas(peca[1]);
    tabuleiro[2][1].setPecas(peca[2]);
    tabuleiro[3][1].setPecas(peca[3]);
    tabuleiro[4][1].setPecas(peca[4]);
    tabuleiro[5][1].setPecas(peca[5]);
    tabuleiro[6][1].setPecas(peca[6]);
    tabuleiro[7][1].setPecas(peca[7]);

// mostra posicoes vazias
     for(int i = 0; i < 8;i++){
        for(int j = 2; j < 6; j++){
            tabuleiro[i][j].setPecas(NULL);
        }

    }

// inicia pecas pretas nas posicoes iniciais padrao
    tabuleiro[0][6].setPecas(peca[16]);
    tabuleiro[1][6].setPecas(peca[17]);
    tabuleiro[2][6].setPecas(peca[18]);
    tabuleiro[3][6].setPecas(peca[19]);
    tabuleiro[4][6].setPecas(peca[20]);
    tabuleiro[5][6].setPecas(peca[21]);
    tabuleiro[6][6].setPecas(peca[22]);
    tabuleiro[7][6].setPecas(peca[23]);

    tabuleiro[0][7].setPecas(peca[24]);
    tabuleiro[1][7].setPecas(peca[25]);
    tabuleiro[2][7].setPecas(peca[26]);
    tabuleiro[3][7].setPecas(peca[27]);
    tabuleiro[4][7].setPecas(peca[28]);
    tabuleiro[5][7].setPecas(peca[29]);
    tabuleiro[6][7].setPecas(peca[30]);
    tabuleiro[7][7].setPecas(peca[31]);
}

void Tabuleiro::imprimeTabuleiro() {
    // imprime os indices da coluna do tabuleiro
    cout << endl;
    // bloco que imprime as casas e as pecas
    for(int i = 0; i < 8; i++) {
        if (i >= 0) {
        } else {
            cout << " ";
        }
        for(int j = 0; j < 8; j++) {
            
            if(tabuleiro[i][j].getCor() == 0) {
                if(tabuleiro[i][j].getStatus()) {
                  cout << "\033[1;31;47m" << tabuleiro[i][j].getPecas() << " " << "\033[m"; //branco           
                } else {
                   cout << "\033[1;31;47m" << tabuleiro[i][j].getPecas() << " " << "\033[m"; //branco
                }
            } else {
                if(tabuleiro[i][j].getStatus()) {
                   cout << "\033[1;31;40m" << tabuleiro[i][j].getPecas() << " " << "\033[m"; //preto    
                } else {
                  cout << "\033[1;31;40m" << tabuleiro[i][j].getPecas() << " " << "\033[m"; //preto
                }
            }
        }
        cout << endl;
    }
}

void Tabuleiro::verPeca(int lOrg, int cOrg, int lDest, int cDest){
    
    /* if(tabuleiro[lOrg][cOrg].getPecas() == "p"){
        if(tabuleiro[lOrg][cOrg].checarPosicao(lOrg, cOrg, lDest, cDest)) {
           
            //atualizarTabuleiro(lOrg, cOrg, lDest, cDest);
        }else{
            cout << "Movimento Invalido" << endl;
            //atualizarTabuleiro(lOrg, cOrg, lDest, cDest);
        }
    }*/
    
}
void Tabuleiro::atualizarTabuleiro(int lOrg, int cOrg, int lDest, int cDest){
  
    tabuleiro[lOrg][cOrg].setPecas(NULL);
    // tabuleiro[lDest][cDest].setpegar("p");
    


}