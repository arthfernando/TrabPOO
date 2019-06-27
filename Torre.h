#include <string>
#include "Peca.h"

using namespace std;

class Torre: public Peca {
private:
    bool status;
    bool moveu;
    bool cor;
public:
    Torre();
    void desenha();
    bool checaMovimento(char linhaOrg, int colOrg, char linhaDest, int colDest);
    bool getCor();
    void setCor(bool);
};
