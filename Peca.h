#ifndef PECA_H_
#define PECA_H_

#include <iostream>
using std::string;
class Peca {
private:
    string id;
    bool status; //indica se esta no jogo
    bool cor;
    bool moveu; //indica se moveu
public:
    Peca();
    Peca(string, bool, bool, bool);
    void setCor(bool);
    bool getCor();
    bool getStatus();

    void setPeca(bool cor, bool status, bool moveu);
    void setStatus(bool status);
    void setMov();

    string getId();
    void setId(string s);

    virtual string desenha() = 0;
    virtual bool checaMovimento(int linhaOrg, int colOrg, int linhaDest, int colDest) = 0;
};
#endif