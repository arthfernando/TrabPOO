#include <string>
#include "Peca.h"

using namespace std;

class Bispo: public Peca {
private:
    bool moveu; //indica se moveu
public:
    Bispo(bool cor, bool ordem);
    char desenha();
    bool checaMovimento(int linhaOrg, int colOrg, int linhaDest, int colDest);
};
