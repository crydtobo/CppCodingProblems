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

bool isTheSameSetOfCharacters(const std::string &str1, const std::string &str2){
    std::map<char, int> s1;
    std::map<char, int> s2;

    for(int i=0; i < str1.size(); i++){
        s1[str1[i]]++;
    }
    for(int i=0; i < str2.size(); i++){
        s2[str2[i]]++;
    }
    if(s1 == s2) 
    {
        return true;
    }
    return false;
}

//zadniae 47
//napisz funkcje kopiujajaca c-string do c-string
char* copyCstring(const char *str){
    size_t lengthCstring = strlen(str);
    char *new_string = new char [lengthCstring + 1];
    while(*str != '\0'){
        *(new_string++) = *(str++); 
    }
    strncpy(new_string, str, lengthCstring + 1);
    return new_string;
}