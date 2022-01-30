#pragma once

template<typename T>
class UniquePtr{
private:
    T *data;
public:
    explicit UniquePtr(T *data): data(data) 
    {}
    ~UniquePtr(){
        delete data;
    }

    //fixme: dodaj construktor kopiujący i operator przyspisania
    UniquePtr(UniquePtr const&) = delete;
    UniquePtr& operator=(UniquePtr const&) = delete;

    T* operator->() const { return data; }
    T& operator*() const { return *data; }

};