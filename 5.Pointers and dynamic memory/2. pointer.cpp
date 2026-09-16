#include <iostream>
using namespace std;

// a pointer is a variable that holds the address of another variable

int main()
{
    int x = 10;
    float y = 5.5;
    cout << &x << endl;
    cout << &y << endl;

    int *xptr = &x;
    cout << xptr << endl; // same as x's address

    // address of a pointer variable

    cout << &xptr << endl; // this will give different address as it is an addres of xptr.

    int **xxptr;

    xxptr = &xptr; // Pointer to the Pointer

    cout << xxptr << endl; // prints the address of xptr

    return 0;
}