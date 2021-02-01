#include <iostream>
#include "class.h"
using namespace std;

int main(){
    Complexos x = 2.1, y = 3.4;

    std::cout  << "x+y = " << x+y << std::endl;
    std::cout  << "x-y = " << x-y << std::endl;
    std::cout  << "x/y = " << x/y << std::endl;
    std::cout  << "x*y = " << x*y << std::endl;
    std::cout << std::endl;

    x++;
    y--;

    if (x == 3.1){
        std::cout << "incremento ocorreu" << std::endl;
        if (y != 3.4){
            std::cout << "decremento ocorreu" << std::endl;
            std::cout << std::endl;
            std::cout  << "x'+y' = " << x+y << std::endl;
            std::cout  << "x'-y' = " << x-y << std::endl;
            std::cout  << "x'/y' = " << x/y << std::endl;
            std::cout  << "x'*y' = " << x*y << std::endl;
        }else{
        std::cout << "decremento não ocorreu, fim das operações." << std::endl;
        }
    }else{
        std::cout << "incremento não ocorreu, fim das operações." << std::endl;
    }

}