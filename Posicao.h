class Posicao {
private:
    bool cor;
    bool status;
public:
    void setCor(int c);
    int getCor();
    void imprimeLinha(int i);
    void imprimeColuna();
    void setStatus(bool b);
    bool getStatus();
};