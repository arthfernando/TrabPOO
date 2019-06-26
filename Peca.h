#include <iostream>

class Peca {
private:
    std::string cor;
public:
    Peca();
    void setCor(std::string);
    virtual void desenha() = 0;
    virtual bool checaMovimento(char linhaOrg, int colOrg, char linhaDest, int colDest) = 0;
};