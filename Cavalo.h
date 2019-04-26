#include <string>
// #include "Posicao.h"

using namespace std;

class Cavalo {
private:
    string id;
    bool status;
    bool cor;
    bool moveu;
    // Posicao posicao;
public:
    Cavalo();
    string desenha();
    int modulo(int x);
    bool checaMovimento(char linhaOrg, int colOrg, char linhaDest, int colDest);
    bool getCor();
    void setCor(bool);
};
