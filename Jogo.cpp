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
    cout<<"Entrou no padrao Joog"<<endl;
    player[0]->setPlayer("", 0);
    player[0]->imprimir();
    cout<<"Saiu do padrao Jogo"<<endl;
    for(int i =0; i<8; i++){
	 	pecas[i] = Peao(1,0);
	}
    
    tabuleiro = Tabuleiro();
    // tabuleiro.imprimeTabuleiro();
}

void Jogo::inserirNome(string jogador1, string jogador2){
    cout << "Inserir nome:"<< endl;
    player[0]->setPlayer(jogador1,1);
    player[1]->setPlayer(jogador2,2);

}

void Jogo::CarregarJogo(string arquivo){

}
void Jogo::SalvarJogo(){

}