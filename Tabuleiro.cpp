#include "Tabuleiro.h"
#include "Posicao.h"
#include <iostream>

/* 1 - Branca 0 - Preta*/
using namespace std;


Tabuleiro::Tabuleiro(){
    for(int i=0;i < 8;i++){
        for(int j=0; j < 8;j++){
            tabuleiro[i][j].setPecas(NULL);
        }
    } 
}

Tabuleiro::Tabuleiro(Peca *peca[32]) {
  
    // indica cor das casas do tabuleiro
    for(int i = 0; i < 8; i++) {
        for(int j = 0; j < 8; j++) {
            ((i+j)%2 == 0) ? tabuleiro[i][j].setCorPosicao(0) : tabuleiro[i][j].setCorPosicao(1);
    
        }
    }

// inicia pecas brancas na posicao inicial padrao
    tabuleiro[0][0].setPecas(peca[8]); 
    tabuleiro[1][0].setPecas(peca[9]);
    tabuleiro[2][0].setPecas(peca[10]);
    tabuleiro[3][0].setPecas(peca[11]);
    tabuleiro[4][0].setPecas(peca[12]);
    tabuleiro[5][0].setPecas(peca[13]);
    tabuleiro[6][0].setPecas(peca[14]);
    tabuleiro[7][0].setPecas(peca[15]);
    tabuleiro[0][1].setPecas(peca[0]);
    tabuleiro[1][1].setPecas(peca[1]);
    tabuleiro[2][1].setPecas(peca[2]);
    tabuleiro[3][1].setPecas(peca[3]);
    tabuleiro[4][1].setPecas(peca[4]);
    tabuleiro[5][1].setPecas(peca[5]);
    tabuleiro[6][1].setPecas(peca[6]);
    tabuleiro[7][1].setPecas(peca[7]);
// mostra posicoes vazias
     for(int i = 0; i < 8;i++){
        for(int j = 2; j < 6; j++){
            tabuleiro[i][j].setPecas(NULL);
        }
    }

// inicia pecas pretas nas posicoes iniciais padrao
    tabuleiro[0][6].setPecas(peca[16]);
    tabuleiro[1][6].setPecas(peca[17]);
    tabuleiro[2][6].setPecas(peca[18]);
    tabuleiro[3][6].setPecas(peca[19]);
    tabuleiro[4][6].setPecas(peca[20]);
    tabuleiro[5][6].setPecas(peca[21]);
    tabuleiro[6][6].setPecas(peca[22]);
    tabuleiro[7][6].setPecas(peca[23]);

    tabuleiro[0][7].setPecas(peca[24]);
    tabuleiro[1][7].setPecas(peca[25]);
    tabuleiro[2][7].setPecas(peca[26]);
    tabuleiro[3][7].setPecas(peca[27]);
    tabuleiro[4][7].setPecas(peca[28]);
    tabuleiro[5][7].setPecas(peca[29]);
    tabuleiro[6][7].setPecas(peca[30]);
    tabuleiro[7][7].setPecas(peca[31]);
}

void Tabuleiro::imprimeTabuleiro() {
    // imprime os indices da coluna do tabuleiro

    for(int i = 0; i < 8; i++) {
        cout << " " << i;
    }

    cout << endl;
    for(int i = 0; i < 8; i++) {
        if (i >= 0) {
            cout << i;
        } else {
            cout << " ";
        }
        for(int j = 0; j < 8; j++) {
            
            if(tabuleiro[i][j].getCorPosicao() == 0) {
                if(tabuleiro[i][j].getOcupado()) {
                  cout << "\033[1;31;47m" << tabuleiro[i][j].desenhaPos() << " " << "\033[m"; //branco           
                } else {
                   cout << "\033[1;31;47m" << tabuleiro[i][j].desenhaPos() << "  " << "\033[m"; //branco
                }
            } else {
                if(tabuleiro[i][j].getOcupado()) {
                   cout << "\033[1;31;40m" << tabuleiro[i][j].desenhaPos() << " " << "\033[m"; //preto    
                } else {
                  cout << "\033[1;31;40m" << tabuleiro[i][j].desenhaPos() << "  " << "\033[m"; //preto
                }
            }
        }
        cout << endl;
    }
}

bool Tabuleiro::verPeca(int lOrg, int cOrg, int lDest, int cDest){
    Peca *org = tabuleiro[lOrg][cOrg].getPecas();

    /* Brancas */
    if(org->getId() == 'P'){
        if(!checagemMovimentoBrancas(org,lOrg,cOrg,lDest,cDest)){
            cout << "Movimento invalido. Jogue novamente" << endl;
            return true;
        }
    }else if(org->getId() == 'T'){
        if(!checagemMovimentoBrancas(org,lOrg,cOrg,lDest,cDest)){
            cout << "Movimento invalido. Jogue novamente" << endl;
            return true;
        }

    }
    else if(org->getId() == 'C'){
        if(!checagemMovimentoBrancas(org,lOrg,cOrg,lDest,cDest)){
            cout << "Movimento invalido. Jogue novamente" << endl;
            return true;
        }
    }
    else if(org->getId() == 'B'){
        if(!checagemMovimentoBrancas(org,lOrg,cOrg,lDest,cDest)){
            cout << "Movimento invalido. Jogue novamente" << endl;
            return true;
        }
    }
    else if(org->getId() == 'K'){
        if(!checagemMovimentoBrancas(org,lOrg,cOrg,lDest,cDest)){
            cout << "Movimento invalido. Jogue novamente" << endl;
            return true;
        }
    }
    else if(org->getId() == 'Q'){
        if(!checagemMovimentoBrancas(org,lOrg,cOrg,lDest,cDest)){
            cout << "Movimento invalido. Jogue novamente" << endl;
            return true;
        }
    }
    
    /*Pretas */
    if(org->getId() == 'p'){
        if(!checagemMovimentoPretas(org,lOrg,cOrg,lDest,cDest)){
            cout << "Movimento invalido. Jogue novamente" << endl;
            return true;
        }
    }else if(org->getId() == 't'){
        if(!checagemMovimentoPretas(org,lOrg,cOrg,lDest,cDest)){
            cout << "Movimento invalido. Jogue novamente" << endl;
            return true;
        }
    }
    else if(org->getId() == 'c'){
        if(!checagemMovimentoPretas(org,lOrg,cOrg,lDest,cDest)){
            cout << "Movimento invalido. Jogue novamente" << endl;
            return true;
        }
    }
    else if(org->getId() == 'b'){
        if(!checagemMovimentoPretas(org,lOrg,cOrg,lDest,cDest)){
            cout << "Movimento invalido. Jogue novamente" << endl;
            return true;
        }
    }
    else if(org->getId() == 'k'){
        if(!checagemMovimentoPretas(org,lOrg,cOrg,lDest,cDest)){
            cout << "Movimento invalido. Jogue novamente" << endl;
            return true;
        }
    }
    else if(org->getId() == 'q'){
        if(!checagemMovimentoPretas(org,lOrg,cOrg,lDest,cDest)){
            cout << "Movimento invalido. Jogue novamente" << endl;
            return true;
        }
    }
    return false;
}

void Tabuleiro::atualizarTabuleiro(int lOrg, int cOrg, int lDest, int cDest){
    
    Peca *org = tabuleiro[lOrg][cOrg].getPecas();

    tabuleiro[lOrg][cOrg].setPecas(NULL);
    tabuleiro[lOrg][cOrg].setOcupado(0);
    tabuleiro[lDest][cDest].setPecas(org);
    tabuleiro[lDest][cDest].setOcupado(1);  
}

void Tabuleiro::atualizarTabuleiroComido(int lOrg, int cOrg, int lDest, int cDest){
    
    Peca *org = tabuleiro[lOrg][cOrg].getPecas();
    
    tabuleiro[lOrg][cOrg].setPecas(NULL);
    tabuleiro[lOrg][cOrg].setOcupado(0);
    /*foi comida */
    org->setStatus(1);
    tabuleiro[lDest][cDest].setPecas(org);
    tabuleiro[lDest][cDest].setOcupado(1);  
}

bool Tabuleiro::checagemMovimentoBrancas(Peca *org,int lOrg,int cOrg,int lDest,int cDest){

    Peca *dest = tabuleiro[lDest][cDest].getPecas();

    if(org->checaMovimento(lOrg, cOrg, lDest, cDest)) {
    
        /*Verificar se tem peca na frente */
        switch(org->getId()){
            case 'T':
                /* Verificar se tem alguma peca na frente da Torre*/
                if(lOrg == lDest){
                    for(int i=lDest+1; i <= cDest;i++){
                        if(tabuleiro[lDest][i].getOcupado() == 1 && dest->getCor() == 1){
                            return false;
                        }
                    }
                    if(tabuleiro[lDest][cDest].getOcupado() == 1 && dest->getCor() == 0){
                        atualizarTabuleiroComido(lOrg, cOrg, lDest, cDest);    
                    }
                /* verificar se tem no lado*/
                }else{
                  /*  for(int i=0; i < lDest;i++){

                        if(tabuleiro[i][cDest].getOcupado() == 1 && tabuleiro[i][cDest].getCor() == 1){
                            cout << "Peca no meio" << endl;
                            return false;
                        }
                    }  */  
                }
            break;

            /* case 'P':
            break;
            case 'Q':
            break;
            case 'K':
            break;
            case 'B':
            break;*/
        }
        /* */
        if(tabuleiro[lDest][cDest].getOcupado() == 0){//mover uma peca posicao vazia
            atualizarTabuleiro(lOrg, cOrg, lDest, cDest);
        }   
    }else{
        return false;
    }
    return true;
}

bool Tabuleiro::checagemMovimentoPretas(Peca *org,int lOrg,int cOrg,int lDest,int cDest){

    Peca *dest = tabuleiro[lDest][cDest].getPecas();

    if(org->checaMovimento(lOrg, cOrg, lDest, cDest)) {
        /* Comer uma peca*/
        if(tabuleiro[lDest][cDest].getOcupado() == 1 && dest->getCor() == 1){
            atualizarTabuleiroComido(lOrg, cOrg, lDest, cDest);
            //cout << "comeu" << endl;
        /*Sua peca */    
        }else if(tabuleiro[lDest][cDest].getOcupado() == 1 && dest->getCor() == 0){
            return false;
        }else if(tabuleiro[lDest][cDest].getOcupado() == 0){//mover uma peca posicao vazia
            atualizarTabuleiro(lOrg, cOrg, lDest, cDest);
        }
    }else{
        return false;
    }
}