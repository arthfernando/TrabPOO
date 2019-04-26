#include <string>
// #include "Posicao.h"

using namespace std;

class Bispo {
private:
    string id;
    bool status;
    bool cor;
    // Posicao posicao;
public:
    void desenha();
    bool checaMovimento(char linhaOrg, int colOrg, char linhaDest, int colDest);
    bool getCor();
    void setCor(bool i);
};
