#include <iostream>
using namespace std;

/*
Pass objects by reference:


---------- pointers

----------- reference variable


2. Refrence variable:

int x = 10;
int &y = x;

here,
y is not a new bucket(memory), but (x,y) refrencing to 10.
 y is  x and x is y.

*/

int main()
{
    int x = 10;
    int &y = x;

    y++;

    cout << x << endl;
    cout << y << endl;

    x++;

    cout << x << endl;
    cout << y << endl;

    return 0;
}