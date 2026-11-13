
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

    ~vector()
    {
        delete[] arr;
    }

    void push_back(const int d)
    {
        // two cases:

        // vector is full
        if (cs == ms)
        {
            // create a new array and delete the old one, double the capacity
            int *oldArr = arr;
            ms = 2 * ms;
            arr = new int[ms];

            // copy the elements
            for (int i = 0; i < cs; i++)
            {
                arr[i] = oldArr[i];
            }

            // delete old array
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

    int front() const
    {
        if (cs == 0)
        {
            cout << "Vector is empty" << endl;
            return -1;
        }

        return arr[0];
    }

    int back() const
    {
        if (cs == 0)
        {
            cout << "Vector is empty" << endl;
            return -1;
        }

        return arr[cs - 1];
    }

    int at(int i) const
    {
        if (i < 0 || i >= cs)
        {
            cout << "Invalid index" << endl;
            return -1;
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

    int operator[](const int i) const
    {
        return arr[i];
    }

    // methods

    // Operation: push_back : add element to last of positon & if the vector is full it going to double it
    // Operation: pop_back: remove last element
    // Operation: get element
    // Operation: front() : what element present at front
    // Operation: back() : what element present at last
    // Operation: size() : size of element
    // Capacity; capacity() : tell the size of element
};

int main()
{
    vector v;

    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);

    cout << v.front() << endl;
    cout << v.back() << endl;

    cout << v.at(2) << endl;

    cout << v.size() << endl; // 5
    cout << v.capacity();     // 8

    // print all elements of the vector

    for (int i = 0; i < v.size(); i++)
    {
        cout << v.at(i) << "," << endl;
    }

    // OR

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << "," << endl;
    }

    return 0;
}
