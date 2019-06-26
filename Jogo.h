#include "Tabuleiro.h"
#include "Peca.h"
#include "Jogador.h" 

class Jogo {
private:
    Jogador player[2];
    Peca *pecas[32];
    Tabuleiro tabuleiro;
public:
    Jogo(std::string jogador1,std::string jogador2);
};