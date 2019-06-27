#include "Jogador.h"
#include "Peca.h"

using std::string;
using std::cout;
using std::endl;

Jogador::Jogador() {
    nome = "";
    cout << "Constr Padrao Jogador" << endl;
    ordem = 0;
    // for(int i = 0; i < 16; i++) {
    //     pecas[i]->setCor("");
    // }
}

/* void Jogador::setPlayer(std::string nome, int ordem) {
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
}*/
void Jogador::setPlayer(string nome1, int ord){
    cout << "Nome antes: " << nome << endl;
    cout << "Atributo string" << nome1 << endl;
    nome = nome1;
    cout << "Nome depois" << nome << endl;
    ordem = ord;
}
void Jogador::imprimir(){
    cout << "Nome impresso: " << nome << endl;
}