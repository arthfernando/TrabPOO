#include <string>
#include "Peca.h"

using namespace std;

class Peao: public Peca {
private:
    string id;
    bool ordem;
    bool status; //indica se esta no jogo
    bool cor;
    bool moveu; //indica se ja foi movida 
public:
    Peao();
    Peao(bool cor, bool ordem,bool status);

    string desenha();
    bool checaMovimento(int linhaOrg, int colOrg, int linhaDest, int colDest);
    bool getCor();
    void setCor(bool i);

    void setId(char c);
    string getId();

    void setStatus(bool s);
    bool getStatus();
    
};
