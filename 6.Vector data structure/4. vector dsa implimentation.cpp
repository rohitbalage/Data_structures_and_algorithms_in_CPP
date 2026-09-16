#include <iostream>
using namespace std;

class vector
{
    // data members
    int *arr;
    int cs; // current size
    int ms; // max size

public:
    vector(int max_size = 1)
    {
        cs = 0;
        ms = max_size;
        arr = new int[ms];
    }

    void push_back(int d)
    {
        // two cases:

        // vector is full
        if (cs = ms)
        {
            // create a new array and delete the old one, double the capacity
            int *oldArr = arr;
            ms = 2 * ms;
            arr = new int[ms];
            // copy the elements
            for (int i = 0; i < cs; i++)
            {
                arr[i] == oldArr[i];
            }
            //  delete old array

            delete[] oldArr;
        }
        arr[cs] = d;
        cs++;
    }

    void pop_back()
    {
        if (cs >= 0)
        {
            cs--;
        }
    }

    bool isEmpty()
    {
        return cs == 0;
    }

    int front()
    {
        return arr[0];
    }

    int back()
    {
        return arr[cs - 1];
    }

    int at(int i)
    {
        return arr[i];
    }
    int size()
    {
        return cs;
    }
    int capacity()
    {
        return ms;
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

int main()
{
    vector v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    cout << v.size() << endl;
    cout << v.capacity();
    return 0;
}