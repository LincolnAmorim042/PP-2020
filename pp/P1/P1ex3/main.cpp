#include <iostream>

using namespace std;

int cont = 0;
int tam = 2;
int* a = new int[tam];

template<class V>
void bubbleSort(V a[], int n) {
    for (int i = 0; i < n - 1; i++)
        for (int j = n - 1; i < j; j--)
            if (a[j] < a[j - 1])
              swap(a[j], a[j - 1]);
}

template<class V>
void shw(V a[], int n){
    cout << "VETOR: ";
    for (int i = 0; i < n; i++){
        cout << a[i] << " ";
    }
    cout << endl;
}

void add(int x){
    if(cont == tam){
        tam = cont*2;
        int* temp = new int[tam];
        for (int i = 0; i < cont; i++){
            temp[i] = a[i];
        }
        temp[cont] = x;
        delete [] a;
        a = temp;
        cout << "VALOR " << x << " ADICIONADO E VETOR AUMENTADO" << endl;
        cont=cont+1;
    }else{
        cout << "VALOR " << x << " ADICIONADO" << endl;
        a[cont] = x;
        cont=cont+1;
    }
}

void rem(int i){
    for (int j=i; j<cont; j++){
        a[j] = a[j+1];
    }
    cont=cont-1;
}

int main(){
    add(1);
    add(3);
    add(2);
    add(4);
    add(7);
    bubbleSort(a, cont);
    shw(a, cont);
    rem(5);
    shw(a, cont);
    return 0;
}
