#include <string>
#include "Peca.h"

using namespace std;

class Cavalo: public Peca {
private:
    bool ordem;
    bool status; //indica se esta no jogo
    bool cor;
    bool moveu; //indica se moveu
public:
    Cavalo(bool cor, bool ordem);
    string desenha();
    int modulo(int x);
    bool checaMovimento(char linhaOrg, int colOrg, char linhaDest, int colDest);
    bool getCor();
    void setCor(bool b);
};
