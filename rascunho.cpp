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
    return false;