#include <iostream>
#include "lib/Stack.hpp"

using namespace std;

int main(){
    Stack var(13);
    var.push(31);
    std::cout << var.top() << std::endl;
    var.pop();
    std::cout << var.top() << std::endl;
    return 0;
}