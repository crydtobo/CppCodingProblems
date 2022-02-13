#include <iostream>
#include "include/tasks.h"

int main()
{
    std::cout << "Main " << std::endl;

    std::cout << S<11>::value << std::endl;
 // std::cout << convertIntToBinaryString(8) << std::endl;
    // std::cout << convertIntToBinaryStringBitset(8) << std::endl;
    // std::cout << convertIntToBinaryStringBitset(-12) << std::endl;

    // adressesAndPointer();

    // zadanie 24
    // MyClassWithNoNew *p = new MyClassWithNoNew(); -> error: ‘MyClassWithNoNew::MyClassWithNoNew()’ is private within this context
    // MyClassWithNoNew::createStack(); -> wszystko git

    // zadanie23

    const std::string s1 = "makotaala";
    const std::string s2 = "alamadwakoty";
    const std::string s3 = "Independent_day@@";
    const std::string s4 = "@@Independent_day";
    const std::string s5 = "alamakota";
    const std::string s6 = "makotaala";

    std::cout << std::boolalpha << isTheSameSetOfCharacters(s1, s2) << std::endl;
    std::cout << std::boolalpha << isTheSameSetOfCharacters(s4, s3) << std::endl;
    std::cout << std::boolalpha << isTheSameSetOfCharacters(s5, s6) << std::endl;
    std::cout << std::boolalpha << isTheSameSetOfCharacters(s1, s6) << std::endl;

//zadanie 25 petla RB
    ForRangeBased<5> str("trolotlo");

    for(auto &x: str){
        std::cout << x << std::endl;
    }

    char * st = new char [5];
    char * st2 = new char [5];
    st = "ellos";
    st2 = st;   
     std::cout << st2  << " drugie " << st << std::endl;
    return 0;
}