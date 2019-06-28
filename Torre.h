#include <string>
#include "Peca.h"

using namespace std;

class Torre: public Peca {
private:
    bool ordem;
    bool status;
    bool moveu;
    bool cor;
public:
    Torre(bool cor, bool ordem,bool status);
    string desenha();
    bool checaMovimento(int linhaOrg, int colOrg, int linhaDest, int colDest);
    bool getCor();
    void setCor(bool);
};
