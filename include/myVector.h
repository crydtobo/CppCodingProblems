#pragma once

#include <iostream>
#include <exception>

template <typename T>
class Vector
{
public:
    Vector()
    {
        ReAlloc(2);
    }
    ~Vector()
    {
        delete[] mData;
    }

    void pushBack(const T &new_element)
    {
        if (mSize >= mCapacity)
        {
            ReAlloc(mCapacity + mCapacity / 2);
        }

        // mData[mSize++] = new_element; //copy
        mData[mSize] = std::move(new_element); // move (better)
        mSize++;
    }

    void clear()
    {
        for (size_t i = 0; i < mSize; i++)
        {
            mData[i].~T();
        }
        mSize = 0;
    }

    void popBack()
    {
        if (mSize > 0)
        {
            mSize--;
            mData[mSize].~T(); // wywołanie destruktory na kazdym elemencie wektora
        }
        else
        {
            throw std::runtime_error("Wrong! Vector is empty!");
        }
    }

    T &operator[](size_t &index)
    {
        if (index >= mSize)
        {
            // assert or throw exception
        }
        return mData[index];
    }

    const T &operator[](size_t &index) const
    {
        if (index >= mSize)
        {
            // assert or throw exception
        }
        return mData[index];
    }

private:
    void ReAlloc(size_t newCapacity)
    {
        T *newBlock = new T[newCapacity];

        if (newCapacity < mSize)
            mSize = newCapacity;

        for (int i = 0; i < mSize; i++)
        {
            newBlock[i] = mData[i];
        }
        delete[] mData;
        mData = newBlock;
        mCapacity = newCapacity;
    }

    T *mData = nullptr;
    size_t mSize = 0;
    size_t mCapacity = 0;
};
