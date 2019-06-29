#include <string>
#include "Peca.h"

using namespace std;

class Torre: public Peca {
private:
    bool moveu;
public:
    Torre(bool cor, bool ordem);
    char desenha();
    bool checaMovimento(int linhaOrg, int colOrg, int linhaDest, int colDest);

};
