#include <iostream>
#include <stdlib.h>
#include "Tabuleiro.h"
#include "Torre.h"
#include "Cavalo.h"
#include "Bispo.h"
#include "Rei.h"
#include "Rainha.h"
#include "Peao.h"


using namespace std;



int main() {
    Tabuleiro t;
    Torre tr;
    Bispo b;
    Rei k;
    Cavalo c;
    Rainha q;
    Peao p;
    int checar;
    t.imprimeTabuleiro();

    char linOrg, linDest, peca;
    int colOrg, colDest;

    
    checar = p.checaMovimento('b',1,'b',0);
    cout << checar << endl;
    cout << "Insira a peca" << endl;
    // cin >> peca;
    cin >> peca;
    cout << peca << endl;
    // cout << "Insira posição de origem" << endl;
    // cin >> linOrg >> colOrg;

    do{
    cout << "Insira posição de destino" << endl;
    cin >> linDest >> colDest;

    
    if(peca = 'T'){
        checar = tr.checaMovimento('b',1,linDest,colDest-1);
        cout << "torre" << endl;
        (checar) ? cout << "movimento válido" << endl : cout << "movimento inválido" << endl;
    }
    else if(peca = 'C'){
        checar = c.checaMovimento('d',3,linDest,colDest-1);
        cout << checar << endl;
        (checar) ? cout << "movimento válido" << endl : cout << "movimento inválido" << endl;
    }
    else if(peca = 'B'){
        checar = b.checaMovimento('b',1,linDest,colDest-1);
        cout << checar << endl;
        (checar) ? cout << "movimento válido" << endl : cout << "movimento inválido" << endl;
    }
    else if(peca = 'K'){

        checar = k.checaMovimento('b',1,linDest,colDest-1);
        cout << checar << endl;
        (checar) ? cout << "movimento válido" << endl: cout << "movimento inválido" << endl;
    }
    else if(peca = 'Q'){
        checar = q.checaMovimento('d',0,linDest,colDest-1);
        cout << checar << endl;
        (checar) ? cout << "movimento válido" << endl: cout << "movimento inválido" << endl;
    }
    else if(peca = 'P'){
        checar = p.checaMovimento('b',1,linDest,colDest-1);
        cout << checar << endl;
        (checar) ? cout << "movimento válido" << endl : cout << "movimento inválido" << endl;
    }

    }while(peca != 'O');
    
    

    return 0;
}