#include "num.h"
#include <iostream>

num::num():
    x(),
    x1(),
    x2()
{}

num::num(unsigned int n){
    x = n;
    x1 = x/256;
    x2 = x%256;
}

//operacoes
unsigned int num::operator+(unsigned int n){
    x= x+n;
    x1 = x/256;
    x2 = x%256;
    return x;
}

unsigned int num::operator-(unsigned int n){
    x= x-n;
    x1 = x/256;
    x2 = x%256;
    return x;
}

float num::operator/(unsigned int n){
    x= x/n;
    x1 = x/256;
    x2 = x%256;
    return x;
}

unsigned int num::operator*(unsigned int n){
    x= x*n;
    x1 = x/256;
    x2 = x%256;
    return x;
}

//incremento/decremento
unsigned int num::operator++(){
    x= x+1;
    x1 = x/256;
    x2 = x%256;
    return x;
}

unsigned int num::operator--(){
    x= x-1;
    x1 = x/256;
    x2 = x%256;
    return x;
}

//comparadores
bool num::operator==(unsigned int n){
    if (x==n){
        return true;
    }
    return false;

}

bool num::operator!=(unsigned int n){
    if (x==n){
        return false;
    }
    return true;

}

bool num::operator<(unsigned int n){
    if (x<n){
        return true;
    }
    return false;

}

bool num::operator>(unsigned int n){
    if (x>n){
        return true;
    }
    return false;

}

bool num::operator<=(unsigned int n){
    if (x<=n){
        return true;
    }
    return false;

}

bool num::operator>=(unsigned int n){
    if (x>=n){
        return true;
    }
    return false;

}

//
unsigned int num::conv(){
    return x;
}

void num::most(){
    std::cout << "bit mais significativo: " << x1 << std::endl;
    std::cout << "bit menos signitficativo: " << x2 << std::endl;
}

