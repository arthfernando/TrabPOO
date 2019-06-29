#include <string>
#include "Peca.h"

using namespace std;

class Peao: public Peca {
private:
    bool moveu; //indica se ja foi movida 
public:
    Peao(bool cor, bool ordem);
    char desenha();
    bool checaMovimento(int linhaOrg, int colOrg, int linhaDest, int colDest);
    
};
