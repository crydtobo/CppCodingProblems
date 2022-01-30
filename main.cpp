#include <iostream>
#include "include/tasks.h"

int main(){
    std::cout << convertIntToBinaryString(8) << std::endl;
    std::cout << convertIntToBinaryStringBitset(8) << std::endl;
    std::cout << convertIntToBinaryStringBitset(-12) << std::endl;
    std::cout << "Main " << std::endl;
    adressesAndPointer();
    return 0;
}