#include <iostream>
#include "num.h"

using namespace std;

int main(){
    num obj(500);
    obj.most();
    if (obj==500){
        std::cout << "igual ao valor inicial" << std::endl;
    }
    obj+200;
    obj.most();
    if (obj>500){
        std::cout << "maior que o valor inicial" << std::endl;
    }
    obj-400;
    obj.most();
    if (obj<500){
        std::cout << "menor que valor inicial" << std::endl;
    }
    obj*2;
    obj.most();
    if (obj>=500){
        std::cout << "maior ou igual ao valor inicial" << std::endl;
    }
    obj/2;
    obj.most();
    if (obj<=500){
        std::cout << "menor ou igual ao valor inicial" << std::endl;
    }
   /*obj++;
    obj.most();
    obj--;
    obj.most();*/
    --obj;
    obj.most();
    ++obj;
    obj.most();
    std::cout << "valor convertido: " << obj.conv() << std::endl;
    return 0;
}
