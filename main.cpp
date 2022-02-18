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

    // char *st = new char[5];
    // char *st2 = new char[5];
    // st = "ellos";
    // st2 = st;
    // std::cout << st2 << " drugie " << st << std::endl;

    // zamień _ na %20
    const std::string change = "To  Jest tekst   ";
    std::cout << "Change: " << changeSpaceToPercent20(change, 13) << std::endl;

    // zadanie 42
    std::cout << "Multiply: " << multiply(4, 12) << std::endl;
    // const std::string hexUint = "0B4AA832222AAFC172CC03CE2849FFCD6887E5921BA56585FF4BFBC908E299D19A738DC269DAD8EA3F2A8BF6C03DB6059D4A2E8A6DF67C97E53E15760402F9346BFAFADD0C1E1261A78B7CAFEBB17E563E91147BC44B868D6AB347720B6194B1DC087F72C42ED0036356629FF8A42ACAA23E3EB08BA55759C98D77A30312954F1CFB5658BF1DF0B864F42C21549F339AC0E959F8D3D81E575F791F78EF0114B4071CEAF8FC121CC229E4BB843DF0449547BC25DD2C3949060676BC07343A8747A9B351A180B444F9D5E6A1C2858212719DC75322690F4E1D00F7C58D282B0DD2AB94073742F84C44022CA9DED992C1B14A84201254157E41F12262C78778A7358D4F31DE685F241ABA04EBC38E809C63E266002FE34DBF49AAEC186AB5815F0271D0C1C9C19C80EA8794B7B105546D091BA25320158E26170AF746D1FB1903A949DA4A9ED57803062906F76D89C3759FB50F5158213395F82273DF692AD623FEE760C31BAFFDE4184BE61E660CA60D3604A9A06ADFE8111F9C5C085348F65A7E9EF58BA98796CC8E8445EC675878F125AF305DF254A515712AE08B622FDC4CDA583026B6CBF7549D575E90B521546005CC75B6C8552261C412DFB5559356927962E981C24541F29412C202EAE48065484E62D98E776BB612F83A011072C73B18A2168C4A38A3345400948B77B2051749F68A987522DBDF90DEC3F521BBED92B1";
    // auto resultVec = hexToBytes(hexUint);
    // for (auto &i : resultVec)
    // {
    //     std::cout << "0x" << std::hex << (int)i << ",";
    // }
    // std::cout << std::endl;
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