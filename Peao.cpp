#include <iostream>
#include "Peao.h"

using namespace std;

string Peao::desenha() {
    return "P";
}

void Peao::checaMovimento(int linhaOrg, int colOrg, int linhaDest, int colDest) {
    if((status==1)&&(cor==b)){
       if ((linhaOrg-linhaDest==2)||(linhaOrg-linhaDest==1)){
         return(true);
       }
       else{
         return(false);
       }
    else if (status==0){
      if(linhaOrg-linhaDest==1){
        return(true);
      }
      else{
        return(false);
      }
    }
}

bool Peao::getCor() {
    return cor;
}

void Peao::setCor(bool i) {
    cor = i;
}
