#include "Tabuleiro.h"
#include <iostream>

// 40 - fundo preto
// 47 - fundo branco
// 30 - fonte preta
// 37 - fonte cinza

using namespace std;

Tabuleiro::Tabuleiro() {
    for(int i = 0; i < 8; i++) {
        for(int j = 0; j < 8; j++) {
            ((i+j)%2 == 0) ? tabuleiro[i][j].setCor(0) : tabuleiro[i][j].setCor(1);
            tabuleiro[i][j].setStatus(0);
        }
    }

    // tabuleiro[4][0].setStatus(b);
    // tabuleiro[3][0].setStatus(b);

}

void Tabuleiro::imprimeTabuleiro() {
    a.imprimeColuna();
    cout << endl;
    for(int i = 0; i < 8; i++) {
        if (i >= 0) {
            a.imprimeLinha(i);
        } else {
            cout << " ";
        }
        for(int j = 0; j < 8; j++) {
            
            if(tabuleiro[i][j].getCor() == 0) {
                if(tabuleiro[i][j].getStatus()) {
                    cout << "\033[30;47m" << " " << " " << "\033[m"; //branco           
                } else {
                    cout << "\033[30;47m" << " " << " " << "\033[m"; //branco
                }
            } else {
                if(tabuleiro[i][j].getStatus()) {
                    cout << "\033[1;37;40m" << " " << " " << "\033[m"; //preto    
                } else {
                    cout << "\033[1;37;40m" << " " << " " << "\033[m"; //preto
                }
            }
        }
        cout << endl;
    }
}

void Tabuleiro::inicio(bool b) {
    tabuleiro[4][0].setStatus(b);
    tabuleiro[3][0].setStatus(b);
}