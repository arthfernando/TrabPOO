#ifndef PECA_H_
#define PECA_H_

#include <iostream>
using std::string;
class Peca {
private:
    string cor;
public:
    Peca();
    void setCor(string);
    virtual void desenha() = 0;
    virtual bool checaMovimento(char linhaOrg, int colOrg, char linhaDest, int colDest) = 0;
};
#endif