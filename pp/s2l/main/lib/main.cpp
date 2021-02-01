#include <iostream>
#include "Stack.hpp"

int main(int argc, char const *argv[])
{

    Stack B(13); //working
    B.push(31); //working
    std::cout << B.top() << std::endl; //working
    B.pop(); //working
    std::cout << B.top() << std::endl; //working 
    return 0;
}
