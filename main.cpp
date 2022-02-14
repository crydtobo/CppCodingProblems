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

    // zadanie 25 petla RB
    ForRangeBased<5> str("trolotlo");

    for (auto &x : str)
    {
        std::cout << x << std::endl;
    }

    char *st = new char[5];
    char *st2 = new char[5];
    st = "ellos";
    st2 = st;
    std::cout << st2 << " drugie " << st << std::endl;
    return 0;
}

// int main(int, char **)
// {
//     // ListNode *l = new ListNode(6);
//     // auto r = addAtHead(l, 5);
//     // r = addAtHead(r, 4);
//     // r = addAtHead(r, 3);
//     // r = addAtHead(r, 2);
//     // r = addAtHead(r, 1);
//     // print(r);

//     ListNode *l2 = new ListNode(7);
//     auto e = addAtHead(l2, 7);
//     e = addAtHead(e, 7);
//     e = addAtHead(e, 7);

//     print(e);
//     Solution s;
//     auto rr = s.removeElements(e, 7);
//     std::cout << " solution" << std::endl;
//     print(rr);
//     std::cout << "Hello, world!\n";
// }

// int main()
// {
//     // std::cout << "Hello, Wandbox!" << std::endl;
//     // std::string str = "30819831b309635546132504c31d30b63554ac44e43424331c30a63554bc3575454311c301a635543c1347656d616c746f2049445072696d6520393430311030e635542ac747656d616c746f311130f635544c84944205072696d6531293027692a864886f7d191161a677072696d65393430406d696c6e65742d7a2e726f6e2e696e74";
//     // std::string certEc = "30819831b309635546132504c31d30b63554ac44e43424331c30a63554bc3575454311c301a635543c1347656d616c746f2049445072696d6520393430311030e635542ac747656d616c746f311130f635544c84944205072696d6531293027692a864886f7d191161a677072696d65393430406d696c6e65742d7a2e726f6e2e696e74";
//     // std::cout << std::boolalpha << (str == certEc) << std::endl;
//     // std::string res = convertHexStringToVectorUint8(hexToBytes(str));
//     char *newStr = new char[strlen("EloSmak") + 1];
//     strcpy(newStr, "EloSmak");
//     reverse(newStr);
//     testing::InitGoogleTest();
//     auto ret = RUN_ALL_TESTS();
//     return ret;
// }