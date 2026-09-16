/*
1. vectors are sequence "containers" representing arrays that can
change the size.
2. just like arrays, vectors use contiguous storage locations for their elements, which means that their
elements can also be accessed directly in O(1) time.

3. but unlike arrays, their size can change dynamically, with theier storage being handled automatically
by the container.

![](1. vector.cp\ed2b4fd0-1bb7-e365-e16f-cdfede29a095.svg)

1. How? --->  fundamentals

2. Use?  -----> problems


if vector = {1,2,3,4} and you want to add 5.

so now new vector is created with new memory location and old one get deleted.

vector2 = { 1,2,3,4,5}

and it will do the same doubling itself when you add a new element.

complexity of push-back(data): O(1)

but in some cases = O(n)


*/
#include <iostream>
#include <vector>
using namespace std;

int main()
{

    // initializer list
    vector<int> vector1 = {1, 2, 3, 4, 5};

    // uniform initialization
    vector<int> vector2{6, 7, 8, 9, 10};

    // method 3
    vector<int> vector3(5, 12);

    cout << "vector1 = ";

    // ranged loop
    for (const int &i : vector1)
    {
        cout << i << "  ";
    }

    cout << "\nvector2 = ";

    // ranged loop
    for (const int &i : vector2)
    {
        cout << i << "  ";
    }

    cout << "\nvector3 = ";

    // ranged loop
    for (int i : vector3)
    {
        cout << i << "  ";
    }

    return 0;
}