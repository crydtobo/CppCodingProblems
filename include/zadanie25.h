#pragma once
#include <iostream>

//Napisz klasę, którą możemy wykorzystać w pętli for range-based 
template<typename T>
struct Iterator{
    T *p;
    T& operator*() {return *p; }
    bool operator !=(char rhs){
        return *p != rhs;
    }
    void operator++(){
        ++p;
    }
};

template<size_t SIZE>
class ForRangeBased{
    public:
        ForRangeBased(const char* inComingString){
            if(inComingString)  
                strncpy(myString,inComingString, SIZE);
        }
    auto begin() const {
        return Iterator<const char>{myString};
    }
    auto end() const {
        return '\0';
    }

    private:
        char myString[SIZE +1]{};
        //char* myString = nullptr;
};