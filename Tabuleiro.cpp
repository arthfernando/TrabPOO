#include "Tabuleiro.h"
#include "Posicao.h"
#include <iostream>

using namespace std;

Tabuleiro::Tabuleiro() {
    // indica cor das casas do tabuleiro
    for(int i = 0; i < 8; i++) {
        for(int j = 0; j < 8; j++) {
            ((i+j)%2 == 0) ? tabuleiro[i][j].setCor(0) : tabuleiro[i][j].setCor(1);
    
        }
    }

// inicia pecas brancas na posicao inicial padrao
    tabuleiro[0][0].setPecas('T');
    tabuleiro[1][0].setPecas('C');
    tabuleiro[2][0].setPecas('B');
    tabuleiro[3][0].setPecas('Q');
    tabuleiro[4][0].setPecas('K');
    tabuleiro[5][0].setPecas('C');
    tabuleiro[6][0].setPecas('B');
    tabuleiro[7][0].setPecas('T');

    tabuleiro[0][1].setPecas('P');
    tabuleiro[1][1].setPecas('P');
    tabuleiro[2][1].setPecas('P');
    tabuleiro[3][1].setPecas('P');
    tabuleiro[4][1].setPecas('P');
    tabuleiro[5][1].setPecas('P');
    tabuleiro[6][1].setPecas('P');
    tabuleiro[7][1].setPecas('P');

// mostra posicoes vazias
    for(int i = 0; i < 8;i++){
        for(int j = 2; j < 6; j++){
            tabuleiro[i][j].setPecas(' ');
        }

    }

// inicia pecas pretas nas posicoes iniciais padrao
    tabuleiro[0][6].setPecas('p');
    tabuleiro[1][6].setPecas('p');
    tabuleiro[2][6].setPecas('p');
    tabuleiro[3][6].setPecas('p');
    tabuleiro[4][6].setPecas('p');
    tabuleiro[5][6].setPecas('p');
    tabuleiro[6][6].setPecas('p');
    tabuleiro[7][6].setPecas('p');

    tabuleiro[0][7].setPecas('t');
    tabuleiro[1][7].setPecas('c');
    tabuleiro[2][7].setPecas('b');
    tabuleiro[3][7].setPecas('q');
    tabuleiro[4][7].setPecas('k');
    tabuleiro[5][7].setPecas('c');
    tabuleiro[6][7].setPecas('b');
    tabuleiro[7][7].setPecas('t');

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
