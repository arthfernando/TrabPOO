#include <string>
#include "Peca.h"

using namespace std;

class Rei: public Peca {
private:
public:
    Rei(bool cor, bool ordem);
    char desenha();
    bool checaMovimento(int linhaOrg, int colOrg, int linhaDest, int colDest);
    
};