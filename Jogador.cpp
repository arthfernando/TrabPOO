#include "Jogador.h"
#include "Peca.h"

using std::string;
using std::cout;
using std::endl;

// Construtor padrão de Jogador, seta nome e ordem como 0
Jogador::Jogador() {
    nome = "";
    ordem = 0;
    // for(int i = 0; i < 16; i++) {
    //     pecas[i]->setCor("");
    // }
}

/* void Jogador::setPlayer(std::string nome, int ordem) {
    nome = nome;
    ordem = ordem;
   
}*/

// setPlayer recebe o nome do jogador e a ordem dele (se é brancas ou pretas)
void Jogador::setPlayer(string nome1, int ord){
    nome = nome1;
    ordem = ord;
}

// imprimir imprime o nome do Jogador
void Jogador::imprimir(){
    cout << "Nome impresso: " << nome << endl;
}