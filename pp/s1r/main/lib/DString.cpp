//
// Created by delair on 31-Mar-20.
//

#include "DString.h"
#include <string.h>

DString::DString() {
    str[0]='\0';
}

DString::DString(const char *s) {
    strcpy(str,s);
}

void DString::copy(DString s) {
    strcpy(str,s.str);
}

const char* DString::operator+(DString s) {
    return (strcat(str,s.str));
}

const char* DString::getStr() { //creio que a segunda sobrecarga de [] era pra ser nessa função, mas tentei de várias formas e continuava dando erro
    return str;
}

const char* DString::operator[](const char *s) {
    return (strcpy(str,s));
}

/*
TENTATIVAS (fazendo as devidas modificações nos demais arquivos)

const char* DString::operator[]() { 
    return str;
}
const char* DString::operator[](char) { 
    return str;
}
const char* DString::operator[](DString) { 
    return (str);
}

Qual delas estava mais perto do certo?
*/