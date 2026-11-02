
#include <iostream>
#include <vector>
using namespace std;



template <typename T> // tells this class all data will be type T; 


class Vector
{
    // data members
    T *arr;
    int cs; // current size
    int ms; // max size

public:
    Vector(int max_size = 1)
    {
        cs = 0;
        ms = max_size;
        arr = new T[ms];
    }

    ~Vector()
    {
        delete[] arr;
    }

    void push_back(const T d)
    {
        // two cases:

        // vector is full
        if (cs == ms)
        {
            // create a new array and delete the old one, double the capacity
            T *oldArr = arr;
            ms = 2 * ms;
            arr = new T[ms];

            // copy the elements
            for (int i = 0; i < cs; i++)
            {
                arr[i] = oldArr[i];
            }

            //  delete old array

            delete[] oldArr;
        }

        arr[cs] = d;
        cs++;
    }

    void pop_back()
    {
        if (cs > 0)
        {
            cs--;
        }
    }

    bool isEmpty() const
    {
        return cs == 0;
    }

    T front() const
    {
        if (cs == 0)
        {
            cout << "Vector is empty" << endl;
            return T();
        }

        return arr[0];
    }

    T back() const
    {
        if (cs == 0)
        {
            cout << "Vector is empty" << endl;
            return T();
        }

        return arr[cs - 1];
    }

    T at(int i) const
    {
        if (i < 0 || i >= cs)
        {
            cout << "Invalid index" << endl;
            return T();
        }

        return arr[i];
    }

    int size() const
    {
        return cs;
    }

    int capacity() const
    {
        return ms;
    }

    // whenever this operator is called on the object of your class, and this operator contains parameter i, you will return array[i]

    T operator[](const int i) const
    {
        return arr[i];
    }

    // methods

    // Operation: push_back : add element to last of positon & if the vector is full it going to double it
    //  Operation: pop_back: remove last element
    // Operation: get element
    // Operation: front() : what element present at front
    // Operation: back() : what element present at last
    // Operation: size() : size of element
    // Capacity;  capacity() : tell the size of element
};
