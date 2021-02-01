#include <iostream>
#include "lib/Stack.hpp"

Stack::Stack(){
   aloc(4),topo(0){
    p = new int[4];
}

Stack::Stack(int val){
    aloc(1),topo(0){
        p = new int[4];
        p[topo] = val;
    }
}

Stack::del(){
    if(aloc==1){
        delete p;
    }else if(aloc > 1){
        delete []p;
    }
}
void Stack::push(int valor){
    if(aloc==1){
        int temp;
        temp = *p;
        delete p;
        aloc++;
        topo++;
        p = new int[aloc];
        p[0] = aux;
        p[1] = val;
    }else if(aloc>1){
        int temp[aloc];
        for(size_t i=0; i<topo; i++){
            aux[i] = p[i];
        }
        delete []p;
        topo++;
        if(topo+1>aloc){
            aloc++;
        }    
        p = new int[aloc];    
        for(size_t i=0; i<topo-1; i++){            
            p[i] = temp[i];
        }
        p[topo] = valor;
    }
}
int Stack::top(){
    return p[topo];
}
void Stack::pop(){
    if(aloc==1){
        aloc--;
        topo--;
        delete p;
    }else if(aloc>1){
        int temp[aloc-1];
        for(size_t i=0; i<aloc; i++){
            temp[i] = p[i];
        }
        delete []p;
        topo--;
        aloc--;
        p = new int[aloc];
        for(size_t i=0; i<aloc; i++){
            p[i] = temp[i];
        }
    )
     
}