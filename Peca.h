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

    void setPeca(bool cor, bool status, bool moveu);
    void setStatus();
    void setMov();


    virtual string desenha() = 0;
    virtual bool checaMovimento(char linhaOrg, int colOrg, char linhaDest, int colDest) = 0;
};
#endif