#include <string>
// #include "Posicao.h"

using namespace std;

class Rei {
private:
    string id;
    bool status;
    bool cor;
    // Posicao posicao;
public:
    string desenha();
    void checaMovimento(int linhaOrg, int colOrg, int linhaDest, int colDest);
    bool getCor();
    void setCor(bool i);
};