#include "Jogador.h"

Jogador::Jogador() {
    nome = "";
    ordem = 0;
    for(int i = 0; i < 16; i++) {
        pecas[i]->setCor("");
    }
}

void Jogador::setPlayer(std::string nome, int ordem) {
    nome = nome;
    ordem = ordem;
    if(ordem == 1) {
        for(int i = 0; i < 16; i++) {
            pecas[i]->setCor("branca");
        }
    } else {
        for(int i = 0; i < 16; i++) {
            pecas[i]->setCor("preta");
        }
    }
}