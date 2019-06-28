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
    void carregarJogo(string arquivo);
    void salvarJogo();
    void imprimirTabuleiro();
    void imprimirTabuleiroAtualizado();
    void verificaPeca(int lOrg, int cOrg, int lDest, int cDest);
};