#include <string>
#include "Peca.h"

using namespace std;

class Peao: public Peca {
private:
    bool ordem;
    bool status; //indica se esta no jogo
    bool cor;
    bool moveu; //indica se ja foi movida 
public:
    Peao();
    Peao(bool cor, bool ordem);

    string desenha();
    bool checaMovimento(char linhaOrg, int colOrg, char linhaDest, int colDest);
    bool getCor();
    void setCor(bool i);
};
