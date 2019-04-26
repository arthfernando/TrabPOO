
#include <iostream>

class Posicao {
private:
    bool cor;
    bool status;
    char peca;
public:
    void setCor(int c);
    int getCor();
    void imprimeLinha(int i);
    void imprimeColuna();
    void setStatus(bool b);
    bool getStatus();
    void setPecas(char p);
    char getPecas();
};