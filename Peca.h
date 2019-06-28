#ifndef PECA_H_
#define PECA_H_

#include <iostream>
using std::string;
class Peca {
private:
    char id;
    bool status; //indica se esta no jogo
    bool cor;
    bool moveu; //indica se moveu
public:
    Peca();
    Peca(char, bool, bool, bool);
    void setCor(bool);
    bool getCor();
    bool getStatus();

    void setPeca(bool cor, bool status, bool moveu);
    void setStatus(bool status);
    void setMov();

    char getId();
    void setId(char s);

    virtual string desenha() = 0;
    virtual bool checaMovimento(int linhaOrg, int colOrg, int linhaDest, int colDest) = 0;
};
#endif