#pragma once
#include <iostream>

//zadanie 19 - wlasna implementacja std::unique_ptr

template<typename T>
class UniquePtr{
private:
    T *data;
public:
    explicit UniquePtr(T *data): 
                    data(data) {}

    ~UniquePtr(){
        delete data;
    }

    //fixme: dodaj construktor kopiujący i operator przypisania
    UniquePtr(UniquePtr const&) = delete;
    UniquePtr& operator=(UniquePtr const&) = delete;

    T* operator->() const { return data; }
    T& operator*() const { return *data; }
    T* release(){
        T* result = nullptr;
        std::swap(result, data);
        return result;
    }

    T* get () const {return data; }
    explicit operator bool() {return data;}

};