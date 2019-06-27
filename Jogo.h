#include "Tabuleiro.h"
#include "Peca.h"
#include "Jogador.h" 

class Jogo {
private:
    Jogador *player[2];
    Peca *pecas[32];
    Tabuleiro *tabuleiro;
public:
    Jogo();
    void inserirNome(std::string jogador1,std::string jogador2);
    void CarregarJogo(string arquivo);
    void SalvarJogo();
    void imprimirTabuleiro();
};