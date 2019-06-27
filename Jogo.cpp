#include <iostream>
#include "Tabuleiro.h"
#include "Jogador.h"
#include "Peca.h"
#include "Jogo.h"
#include "Torre.h"
#include "Peao.h"

using std::string;
using std::cout;
using std::cin;
using std::endl;

Jogo::Jogo(){
    cout << endl;
    for(int i = 0; i < 2; i++) {
        player[i] = new Jogador();
    }
    /* peao preto*/
    for(int i =0; i<32; i++){
	 	pecas[i] = new Peao(1,0);
	}
    
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