#include <string>
#include "Peca.h"

using namespace std;

class Rainha: public Peca {
private:
    bool ordem;
    bool status; //indica se esta no jogo
    bool cor;
public:
    Rainha(bool cor, bool ordem);
    string desenha();
    bool checaMovimento(int linhaOrg, int colOrg, int linhaDest, int colDest);
    bool getCor();
    void setCor(bool i);
};