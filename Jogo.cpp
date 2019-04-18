#include <iostream>
#include "Jogo.h"

// 40 - fundo preto
// 47 - fundo branco
// 30 - fonte preta
// 37 - fonte cinza


using namespace std;

void Jogo::imprimeTabuleiro() {
    char a = 'a';
    for(int i = 0; i < 9; i++) {
        if(i == 0)
        cout << "   ";
        for(int j = 0; j < 8; j++) {
            if(i == 0) {
                cout << "|" << j+1 << "|";
            } else {
                cout << "\033[40m|" << 'a' << "|\033[0m";
            }

        }
        if (i != 8) {
            char b = a + i;
            cout << endl;
            cout << "|" << b << "|";
        }
    }
    cout << endl;
}

int main() {
    Jogo j;
    j.imprimeTabuleiro();


    return 0;
}