#include "../include/tasks.h"
#include <algorithm>

//zadanie 43: Napisz funkcję, która wyświetla zmienną całkowitą w postaci binarnej
std::string convertIntToBinaryString(const int &number){
    std::string binaryString;
    int x = number;
    if(x == 0) return "0";
    while(x > 0){
        binaryString += std::to_string(x%2);
        x = x/2;
    }
    std::reverse(binaryString.begin(), binaryString.end());
    return binaryString;
}

std::string convertIntToBinaryStringBitset(const int &number)
{
    return std::bitset<8>(number).to_string();
}

//zadanie 42

void adressesAndPointer()
{   
    int val = 0xAA938642;
    char *c_ptr = (char*)(&val);
    c_ptr++;
    ++c_ptr;

    std::cout << std::hex << "0x" << val << std::endl;
    std::cout << (int)*(c_ptr) << std::endl;
}