#pragma once

#include <string>
#include <iostream>
#include <cstdlib>
#include <vector>
#include <iomanip>
#include <bitset>
#include <bits/stdc++.h>

#include "zadanie23.h"
#include "zadanie24.h"
#include "zadanie25.h"
#include "myTree.h"
#include "myVector.h"
#include "myArray.h"
#include "myLinkedList.h"
#include "myGraph.h"

template <int N>
struct S
{
    enum
    {
        value = S<N / 2>::value + (N % 2)
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

// zadanie 43
std::string convertIntToBinaryString(const int &number);
std::string convertIntToBinaryStringBitset(const int &number);

// zadanie 45
/*
Napisz funkcję, która zastępuje wszystkie spacje w podanym std::stringu znakami ‘%20’.
Możesz założyć dostępność nieograniczonego miejsca po modyfikacji std::string.

W inpucie funkcji jest podany string i długość wyjściowego std::string ('%20' - liczymy jako jeden znak).
Zastąpienie spacji powinno wystąpić tylko w środku std::string, a w momencie wystąpienia więcej niż jednej spacji, wrzucamy tylko jedno zastąpienie.

Przykład:
Input: "To jest  tekst  ", 13
Output: "To%20Jest%20tekst"
*/
std::string changeSpaceToPercent20(const std::string &str, size_t length);

// zadanie 42
void adressesAndPointer();

// zadanie 18 - wlasna implementacja stosu
//(najlepiej gdyb rozmiar stosu był dynamiczny i implementacja jka najbardziej optymalna)

// zadniae 47
// napisz funkcje kopiujajaca c-string do c-string
char *copyCstring(const char *str);
// zadanie 24

std::vector<uint8_t> hexToBytes(const std::string &hex);
std::string convertHexStringToVectorUint8(const std::vector<uint8_t> &hexToBytes);

// zadanie 44
/*

Napisz funkcję setBit, która ustawia bit o podanym indeksie.
Funkcja przyjmuje:
1. liczbę, na której bit jest ustawiany
2. indeks bitu
3. wartość bitu

*/

uint8_t setBit(uint8_t number, int index, int valueOfBit);

// zadanie 30
// jak wylaczyc Copy Elision przec C++17
//#pragma GCC optimize ("no-elide-constructors")

// zadanie 31
//  odwroc c-string'a void reverse(char *c)

void reverseCString(char *cstringArg);

// zadanie 41
// Pomnóż dwie liczby, nie używając do tego znaku mnożenia!
int multiply(const int &a, const int &b);

// zadanie 39
// Zaimplementuj swoją wersję algorytmu sortującego merge-sort.
std::vector<int> mergeSort(const std::vector<int> &arrayToSort);
std::vector<int> merge(const std::vector<int> &left, const std::vector<int> &right);