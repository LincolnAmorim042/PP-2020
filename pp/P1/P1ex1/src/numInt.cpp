#include <iostream>
#include <stdlib.h>
#include "numInt.h"

numInt::numInt(){
    ult = -1;
}
int& numInt::operator[](int x){
    numInt::tam = x;
    return v[tam];
}
void numInt::ins(int nv){
    if (ult >= tam - 1){
        std::cout << " LISTA CHEIA\n";
        return;
    }
    else{
        v[++ult] = nv;
        std::cout << nv << " ADICIONADO\n";
        return;
    }
}

void numInt::rem(){
    if (ult < 0) {
        std::cout << "LISTA VAZIA";
        return;
    }
    else{
        int x = v[ult--];
        std::cout << x << " REMOVIDO\n";
        return;
    }
}


