#pragma once
#include <string>
#include <bits/stdc++.h>
#include "zadanie23.h"
#include "zadanie24.h"
#include "zadanie25.h"
#include "tree.h"

//zadanie 43

std::string convertIntToBinaryString(const int &number);
std::string convertIntToBinaryStringBitset(const int &number);

//zadanie 42
void adressesAndPointer();

//zadanie 18 - wlasna implementacja stosu 
//(najlepiej gdyb rozmiar stosu był dynamiczny i implementacja jka najbardziej optymalna)

//zadniae 47
//napisz funkcje kopiujajaca c-string do c-string
char* copyCstring(const char *str); 
//zadanie 24

template<int N>
struct S{
    enum {
        value = S<N/2>::value + (N%2) 
    };
};

template <>
struct S<0>
{
    enum
    {
        value = 0
    };
};
