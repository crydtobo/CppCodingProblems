#pragma once
#include <string>
#include <map>

//zadanie 23
/*

Napisz funkcję, która przyjmuje dwa obiekty typu std::string i sprawdza, czy zawierają one dokładnie ten sam zestaw znaków, co do ich wielkości i liczby.
Załóżmy, że stringi nie będą zawierały spacji.

str1: "Independent_day@@"
str2: "@@Independent_day"
➡ True

str1: "alamakota"
str2: "makotaala"
➡ True

str1: "alamadwakoty"
str2: "makotaala"
➡ False
*/

bool isTheSameSetOfCharacters(const std::string &str1, const std::string &str2);
