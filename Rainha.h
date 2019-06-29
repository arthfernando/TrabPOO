#include <string>
#include "Peca.h"

using namespace std;

class Rainha: public Peca {
private:
public:
    Rainha(bool cor, bool ordem);
    char desenha();
    bool checaMovimento(int linhaOrg, int colOrg, int linhaDest, int colDest);
};