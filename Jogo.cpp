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

// Construtor padrão do Jogo, aloca os dois Jogadores e as Pecas do jogo
Jogo::Jogo(){
    cout << endl;
    for(int i = 0; i < 2; i++) {
        player[i] = new Jogador();
    }
    /* pecas brancas*/
    for(int i =0; i<8; i++){
	 	pecas[i] = new Peao(1,0,1);
	}

    pecas[8] = new Torre(1,0,1);
    pecas[9] = new Cavalo(1,0);
    pecas[10] = new Bispo(1,0);
    pecas[11] = new Rei(1,0);
    pecas[12] = new Rainha(1,0);
    pecas[13] = new Bispo(1,0);
    pecas[14] = new Cavalo(1,0); 
    pecas[15] = new Torre(1,0,1);

    /* pecas pretas*/
    for(int i =16; i<24; i++){
	 	pecas[i] = new Peao(0,1,1);
	}

    pecas[24] = new Torre(0,1,1);
    pecas[25] = new Cavalo(0,1);
    pecas[26] = new Bispo(0,1);
    pecas[27] = new Rei(0,1);
    pecas[28] = new Rainha(0,1);
    pecas[29] = new Bispo(0,1);
    pecas[30] = new Cavalo(0,1); 
    pecas[31] = new Torre(0,1,1);
    tabuleiro = new Tabuleiro(pecas);  
}

// imprimirTabuleiro imprime o tabuleiro no Jogo
void Jogo::imprimirTabuleiro() {
    tabuleiro->imprimeTabuleiro();
}

// imprimirTabuleiroAtualizado mostra o tabuleiro atualizado
void Jogo::imprimirTabuleiroAtualizado() {
    //tabuleiro->imprimeTabuleiroAtualizado();
}

// inserirNome recebe duas strings (nome do jogadores) e atribui a cada Jogador
void Jogo::inserirNome(string jogador1, string jogador2){
    player[0]->setPlayer(jogador1,0);
    player[1]->setPlayer(jogador2,1);

}

// carregarJogo recupera informações do arquivo e inicia o Jogo com elas
void Jogo::carregarJogo(string arquivo){

}

// salvarJogo passa as informações do estado do Jogo para um arquivo
void Jogo::salvarJogo(){

}

// verificaPeca recebe posicao de origem e destino e faz a verificacao da peca que quer se mover
void Jogo::verificaPeca(int lOrg,int cOrg, int lDest, int cDest){
    tabuleiro->verPeca(lOrg, cOrg, lDest, cDest);    
}


