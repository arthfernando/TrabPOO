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
    void desenha();
    bool checaMovimento(char linhaOrg, int colOrg, char linhaDest, int colDest);
    bool getCor();
    void setCor(bool i);
};
