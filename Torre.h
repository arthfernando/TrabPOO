#include <string>
#include "Peca.h"

using namespace std;

class Torre: public Peca {
private:
    string id;
    bool status; //indica se esta no jogo
    bool cor;
    bool moveu; //indica se moveu
public:
    Torre();
    void desenha();
    bool checaMovimento(char linhaOrg, int colOrg, char linhaDest, int colDest);
    bool getCor();
    void setCor(bool);
};
