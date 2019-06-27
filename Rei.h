#include <string>
#include "Peca.h"

using namespace std;

class Rei: public Peca {
private:
    string id;
    bool status; //indica se esta no jogo
    bool cor;
public:
    string desenha();
    bool checaMovimento(char linhaOrg, int colOrg, char linhaDest, int colDest);
    bool getCor();
    void setCor(bool i);
};