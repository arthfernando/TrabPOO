#include <string>
#include "Peca.h"

using namespace std;

class Cavalo: public Peca {
private:
    bool moveu; //indica se moveu
public:
    Cavalo(bool cor, bool ordem);
    char desenha();
    int modulo(int x);
    bool checaMovimento(int linhaOrg, int colOrg, int linhaDest, int colDest);
};
