#include "../include/tasks.h"
#include <algorithm>
#include <cstring>

// zadanie 43: Napisz funkcję, która wyświetla zmienną całkowitą w postaci binarnej
std::string convertIntToBinaryString(const int &number)
{
    std::string binaryString;
    int x = number;
    if (x == 0)
        return "0";
    while (x > 0)
    {
        binaryString += std::to_string(x % 2);
        x = x / 2;
    }
    std::reverse(binaryString.begin(), binaryString.end());
    return binaryString;
}

std::string convertIntToBinaryStringBitset(const int &number)
{
    return std::bitset<8>(number).to_string();
}

// zadanie 42
void adressesAndPointer()
{
    int val = 0xAA938642;
    char *c_ptr = (char *)(&val);
    c_ptr++;
    ++c_ptr;

    std::cout << std::hex << "0x" << val << std::endl;
    std::cout << (int)*(c_ptr) << std::endl;
}

bool isTheSameSetOfCharacters(const std::string &str1, const std::string &str2)
{
    std::map<char, int> s1;
    std::map<char, int> s2;

    for (int i = 0; i < str1.size(); i++)
    {
        s1[str1[i]]++;
    }
    for (int i = 0; i < str2.size(); i++)
    {
        s2[str2[i]]++;
    }
    if (s1 == s2)
    {
        return true;
    }
    return false;
}

// zadniae 47
// napisz funkcje kopiujajaca c-string do c-string
char *copyCstring(const char *str)
{
    size_t lengthCstring = strlen(str);
    char *new_string = new char[lengthCstring + 1];
    while (*str != '\0')
    {
        *(new_string++) = *(str++);
    }
    strncpy(new_string, str, lengthCstring + 1);
    return new_string;
}

std::vector<uint8_t> hexToBytes(const std::string &hex)
{
    std::vector<uint8_t> bytes;

    for (unsigned int i = 0; i < hex.length(); i += 2)
    {
        std::string byteString = hex.substr(i, 2);
        uint8_t byte = (uint8_t)strtol(byteString.c_str(), NULL, 16);
        bytes.push_back(byte);
    }

    return bytes;
}

std::string convertHexStringToVectorUint8(const std::vector<uint8_t> &hexToBytes)
{
    std::string result;
    for (auto &i : hexToBytes)
    {
        std::stringstream stream;
        stream << std::hex << (int)i;
        // std::string hexNumber();
        result += "0x" + stream.str() + ",";
    }
    return result;
}

// zadanie 44
uint8_t setBit(uint8_t number, int index, int valueOfBit)
{
    uint8_t result = number;
    if ((valueOfBit == 1 || valueOfBit == 0) && (index >= 0 && index < 8))
    {
        result = (result & ~(1UL << index)) | (valueOfBit << index);
        return result;
    }
    return 0;
}

// zadanie 29
void reverseCString(char *cstringArg)
{
    int strLength = strlen(cstringArg);
    char *str = new char[strLength + 1];
    while (strLength--)
    {
        str[strLength] = *(cstringArg++);
    }
}

std::string changeSpaceToPercent20(const std::string &str, size_t length)
{
    int i = 0;
    size_t end = 0;
    std::string result;
    while (end < length)
    {
        if (str[i] == ' ')
        {
            while (str[i] == ' ')
                i++;
            result.push_back('%');
            result.push_back('2');
            result.push_back('0');
        }
        else
        {
            result.push_back(str[i]);
            i++;
        }
        end++;
    }
    return result;
}

int multiply(const int &a, const int &b)
{
    int mul = 0;
    int n = a;
    int m = b;
    while (n > 0)
    {
        if (n % 2 != 0) // niepatrzyste
            mul += m;
        m = m << 1;
        n = n >> 1;
    }
    return mul;
}

std::vector<int> mergeSort(const std::vector<int> &arrayToSort)
{
    if (arrayToSort.size() <= 1)
    {
        return arrayToSort;
    }

    size_t middle = arrayToSort.size() / 2;
    std::vector<int> left(arrayToSort.begin(), arrayToSort.begin() + middle);
    std::vector<int> right(arrayToSort.begin() + middle, arrayToSort.end());

    return merge(mergeSort(left), mergeSort(right));
}

std::vector<int> merge(const std::vector<int> &left, const std::vector<int> &right)
{
    std::vector<int> result;
    return result;
}