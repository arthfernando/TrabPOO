#include <iostream>
#include "Tabuleiro.h"
#include "Jogador.h"
#include "Peca.h"
#include "Jogo.h"
#include "Torre.h"
#include "Peao.h"
#include "Rei.h"
#include "Rainha.h"
#include "Bispo.h"
#include "Cavalo.h"

using std::string;
using std::cout;
using std::cin;
using std::endl;

Jogo::Jogo(){
    cout << endl;
    for(int i = 0; i < 2; i++) {
        player[i] = new Jogador();
    }
    /* pecas brancas*/
    for(int i =0; i<8; i++){
	 	pecas[i] = new Peao(1,0);
	}

    pecas[8] = new Torre(1,0);
    pecas[9] = new Cavalo(1,0);
    pecas[10] = new Bispo(1,0);
    pecas[11] = new Rei(1,0);
    pecas[12] = new Rainha(1,0);
    pecas[13] = new Bispo(1,0);
    pecas[14] = new Cavalo(1,0); 
    pecas[15] = new Torre(1,0);

    /* pecas pretas*/
    for(int i =16; i<24; i++){
	 	pecas[i] = new Peao(0,1);
	}

    pecas[24] = new Torre(0,1);
    pecas[25] = new Cavalo(0,1);
    pecas[26] = new Bispo(0,1);
    pecas[27] = new Rei(0,1);
    pecas[28] = new Rainha(0,1);
    pecas[29] = new Bispo(0,1);
    pecas[30] = new Cavalo(0,1); 
    pecas[31] = new Torre(0,1);
    tabuleiro = new Tabuleiro(pecas);  
}

void Jogo::imprimirTabuleiro() {
    tabuleiro->imprimeTabuleiro();
}

void Jogo::inserirNome(string jogador1, string jogador2){
    player[0]->setPlayer(jogador1,1);
    player[1]->setPlayer(jogador2,2);

}
void Jogo::CarregarJogo(string arquivo){

}
void Jogo::SalvarJogo(){

}