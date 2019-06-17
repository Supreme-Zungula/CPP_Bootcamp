#ifndef __ARRAY_TEMP__
#define __ARRAY_TEMP__

#include <exception>

template <class T>
class Array
{
private:
    /* data */
    T *_arrayPtr;
    unsigned int _size;

public:
    Array<T>(/* args */)
    {
        this->_numOfElem = 0;
        this->_size = 0;
        this->_arrayPtr = new T();
    }

    Array<T>(unsigned int size)
    {
        this->_size = size;
        this->_arrayPtr = new T[size];
    }

    Array<T>(Array<T> const &arrCpy)
    {
        if (this != &arrCpy)
        {
            *this = arrCpy;
        }
    }

    ~Array<T>()
    {
    }

    Array<T> &operator=(Array const &newArr)
    {
        if (this != &newArr)
        {
            this->_size = newArr.size();
            this->_arrayPtr = newArr._arrayPtr;
        }
        return (*this);
    }

    T &operator[](unsigned int index) const
    {
        if (index >= this->_size)
        {
            throw std::exception();
        }
        return (this->_arrayPtr[index]);
    }

    unsigned int size() const
    {
        return (this->_size);
    }

    void print() const
    {
        size_t i = 0;

        while (i < this->_size)
        {
            if (i < this->_size - 1)
            {
                std::cout << this->_arrayPtr[i] << " ";
            }
            else
            {
                std::cout << this->_arrayPtr[i];
            }
            i++;
        }
    }
};

#endif