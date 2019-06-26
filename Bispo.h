#include <string>
#include "Peca.h"

using namespace std;

class Bispo: public Peca {
private:
    string id;
    bool status;
    bool cor;
public:
    Bispo();
    void desenha();
    bool checaMovimento(char linhaOrg, int colOrg, char linhaDest, int colDest);
    bool getCor();
    void setCor(bool i);
};
