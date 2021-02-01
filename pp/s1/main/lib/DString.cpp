#include <string.h>
#include "DString.h"

DString::DString(){
    tst[0]=0;
}
DString::DString(char teste[]){
    for (size_t i = 0; i < strlen(teste); i++){
        tst[i] = teste[i];
    }
}
void DString::copy(DString obj){
    for (size_t i = 0; i < strlen(tst); i++){
        tst[i] = 0;
    }
    strcpy(tst,obj.getStr());
}
void DString::setStr(char teste[]){
    for (size_t i = 0; i < strlen(tst); i++){
        tst[i] = 0;
    }
    strcpy(tst, teste);
}
void DString::setStr(DString obj){
    for (size_t i = 0; i < strlen(tst); i++){
        tst[i] = 0;
    }   
    strcpy(tst,obj.getStr());
}
void DString::concat(DString obj){
    strcat(tst, obj.getStr());
}
char* DString::getStr(){
    return tst;
}
