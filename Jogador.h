#include "Peca.h"

using std::string;

class Jogador {
private:
    Peca *pecas[16];
    string nome;
    int ordem;

public:
    Jogador();
    void setPlayer(std::string nome, int ordem);
};