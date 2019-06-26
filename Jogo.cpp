#include <iostream>
#include "Tabuleiro.h"
#include "Jogador.h"
#include "Peca.h"
#include "Jogo.h"

using std::string;
using std::cout;
using std::cin;
using std::endl;

/*Vamos ter que fazer uma main o jogo nao é main */
int main() {
    Tabuleiro t;
    Jogador *j;
    //Jogo game;
    string nome1;
	string nome2;
    string entrada,arquivo;
    int opcao;
    bool novojogo = true;

    cout << "------------------MENU--------------------" << endl;
    cout << endl << endl;
    /*Buscar jogo salvo*/
    while(novojogo){
        cout << "Quer continuar de onde parou ? (S ou N)" << endl;
        cin >> entrada;

        if(entrada == "S"){
            cin >> arquivo;
            //game.CarregarJogo(arquivo);
            novojogo = false;
        }else{
            novojogo = false;
        }
    }

    cout << "5 - Sair e Salvar" << endl;
    cout << "6 - Sair" << endl;

	std::cout << "Nome do Jogador 1 (Brancas): ";
    std::cin >> nome1;
	std::cout << "Nome do Jogador 2 (Pretas): ";
    std::cin >> nome2;
	
    /* passar os nomes dos jogadores*/
    //game.inserirNome(nome1,nome2);
	//jogar.inserirNome(nome1,nome2);
    //jogar.imprimir();
    while(xeque_mate){
        switch(opcao){  
            case 5:
                //game.SalvarJogo();
                exit(1);
            break;
            case 6:
                exit(1);
        }
    }

    return 0;
}

Jogo::Jogo(){

    for (int i =0; i<32; i++){
		pecas[i] = NULL;
	}
    /*inicializar nomes */

}

Jogo::Jogo(string jogador1, string jogador2) {
    cout << jogador1 << endl;
    player[0].setPlayer(jogador1,1);
    player[1].setPlayer(jogador2,2);
 
}
void Jogo::inserirNome(string jogador1, string jogador2){

    player[0].setPlayer(jogador1,1);
    player[1].setPlayer(jogador2,2);

}
void Jogo::imprimir(){

    player[0].imprimir();
    player[1].imprimir();
}
void Jogo::CarregarJogo(string arquivo){

}
void Jogo::SalvarJogo(){

}