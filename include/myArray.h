#pragma once

#include <iostream>

// stack allocation array -> int array[5];
// heap allocation -> int *heapArray = new int [5];
// delete heapArray -> i can do this int *heapArray = new  int [size]
// i CAN NOT do this int array[size] Wrong!!! becaouse compiler must know size of arrray.
// but you litterly you can allocate arra on the stack
// constexpr int size = 5; -> int arra[size] IT IS OK!

//  you cant allocate dynamic array in stack in C++
//  int *data;
//  data = (int*)alloca(size * sizeof(int));
//  dlatego ze alloca bierze size w bajtach
// size_t poniewaz size_t to unsigned int stad brak mozliwosci przypisania do N ujemnej liczby

template <typename T, size_t N>
class MyArray
{
public:
    MyArray()
    {
        // data = new T[N];
    }

    // size_t Size() const { return N; }
    constexpr int Size() { return N; }

    T &operator[](size_t index) { return data[index]; }
    const T &operator[](const int index) const { return data[index]; }

    const T *Data() const { return data; }
    T *Data() { return data; }

private:
    // T *data;
    T data[N];
};
