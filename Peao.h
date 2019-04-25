#include <string>
// #include "Posicao.h"

using namespace std;

class Peao {
private:
    string id;
    bool status;
    bool cor;
    bool moveu;
    // Posicao posicao;
public:
    string desenha();
    bool checaMovimento(int linhaOrg, int colOrg, int linhaDest, int colDest);
    bool getCor();
    void setCor(bool i);
};
