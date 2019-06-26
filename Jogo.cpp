#include <iostream>
#include "Tabuleiro.h"
#include "Jogador.h"
#include "Jogo.h"


int main() {
    Tabuleiro t;
    Jogador *j;
    std::string nome1;
	std::string nome2;
    
	std::cout << "Nome do Jogador 1 (Brancas): ";
    std::cin >> nome1;
	std::cout << "Nome do Jogador 2 (Pretas): ";
    std::cin >> nome2;
	
	j[0].setPlayer(nome1, 1);
	

    return 0;
}

Jogo::Jogo(std::string jogador1, std::string jogador2) {
    
    
}