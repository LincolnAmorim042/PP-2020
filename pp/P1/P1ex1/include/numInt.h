#ifndef NUMINT_H
#define NUMINT_H
#include <iostream>

class numInt{
    int ult;
    int tam;
    int v[];
    public:
        numInt();
        int& operator[](int x);
        void ins(int nv);
        void rem();
};

#endif // NUMINT_H
