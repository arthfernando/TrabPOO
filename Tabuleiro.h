#include "Posicao.h"
#include "Rei.h"

class Tabuleiro {
private:
    Posicao tabuleiro[8][8];
    Posicao a;
    // Rei r;

public:
    Tabuleiro();
    void imprimeTabuleiro();
    void inicio(bool b);
};