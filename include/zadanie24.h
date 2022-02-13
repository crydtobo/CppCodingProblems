#pragma once

/*
    Napisz klase której nie można zaalkować operatorem new
*/

class MyClassWithNoNew{
public:
    // static MyClassWithNoNew* createHeap(){
    //     return new MyClassWithNoNew();
    // }
    static void createStack(){
        MyClassWithNoNew myObj();
    }
    private:
        MyClassWithNoNew();

};