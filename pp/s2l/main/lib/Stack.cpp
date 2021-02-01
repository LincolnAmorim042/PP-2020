#include <iostream>
#include "Stack.hpp"
Stack::Stack():
nAlocado(4),
topo(0)
{
    ptr = new int[4];
}

Stack::Stack(int val):
nAlocado(1),
topo(0)
{
    ptr = new int[4];
    ptr[topo] = val;
}

Stack::~Stack()
{
    if(nAlocado == 1)
        delete ptr;
    else if(nAlocado > 1)
        delete []ptr;
}

void Stack::push(int val)
{
    if(nAlocado == 1)
    {
        int aux;
        aux = *ptr;
        delete ptr;
        nAlocado++;
        topo++;
        ptr = new int[nAlocado];
        ptr[0] = aux;
        ptr[1] = val;
    }
    else if(nAlocado > 1)
    {
        int aux[nAlocado];
        for (size_t i = 0; i < topo; i++)
            aux[i] = ptr[i];
        delete []ptr;
        topo++;
        if(topo+1 > nAlocado) //Se o meu topo ultrapassar o limite de alocacao, aumentar o tamanho
            nAlocado++;
        ptr = new int[nAlocado];
        for (size_t i = 0; i < topo-1; i++) //Como eu incrementei em cima, reduzir um do TAM_TOTAL
            ptr[i] = aux[i];
        ptr[topo] = val;
    }
}

int Stack::top()
{
    return ptr[topo]; //-1 pq o alocamento comeca em ZERO
}

void Stack::pop()
{
    if(nAlocado == 1)
    {
        nAlocado--;
        topo--;
        delete ptr;
    }
    else if(nAlocado > 1)
    {
        int aux[nAlocado-1];
        for (size_t i = 0; i < nAlocado-1; i++)
            aux[i] = ptr[i];
        delete []ptr;
        topo--;
        nAlocado--;
        ptr = new int[nAlocado];
        for (size_t i = 0; i < nAlocado; i++)
            ptr[i] = aux[i];
    }
}