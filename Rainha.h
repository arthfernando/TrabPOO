#include <string>

using namespace std;

class Rainha {
private:
    string id;
    bool status;
    bool cor;
public:
    void desenha();
    bool checaMovimento(char linhaOrg, int colOrg, char linhaDest, int colDest);
    bool getCor();
    void setCor(bool i);
};