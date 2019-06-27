#include "Jogador.h"
#include "Peca.h"

using std::string;
using std::cout;
using std::endl;

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
void Jogador::setPlayer(string nome1, int ord){
    nome = nome1;
    ordem = ord;
}
void Jogador::imprimir(){
    cout << "Nome impresso: " << nome << endl;
}