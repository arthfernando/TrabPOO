#include "Jogo.h"

using std::string;
using std::cout;
using std::cin;
using std::endl;

int main() {
    Tabuleiro t;
    Jogador *j;
    Jogo game;
    string nome1;
	string nome2;
    string entrada,arquivo;
    int opcao;
    bool novojogo = true;
    bool xeque_mate = true;

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

    // cout << "5 - Sair e Salvar" << endl;
    // cout << "6 - Sair" << endl;

	std::cout << "Nome do Jogador 1 (Brancas): ";
    std::cin >> nome1;
	std::cout << "Nome do Jogador 2 (Pretas): ";
    std::cin >> nome2;
	
    /* passar os nomes dos jogadores*/
    game.inserirNome(nome1,nome2);
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