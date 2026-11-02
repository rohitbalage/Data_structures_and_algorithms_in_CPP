#include <iostream>
#include "vector.h"
using namespace std;



int main()
{
    Vector<int> v(5);  // defined which type of data we are going to store in vector class

/*

vectors of char type:

Vector<char> vc;
vc.push_back('a');
vc.push_back('b');
vc.push_back('c');

for(int i=0; i< vc.size(); i++)
{
    cout<< vc[i] <<endl;
}

*/

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