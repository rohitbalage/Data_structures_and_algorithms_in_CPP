#include <iostream>
using namespace std;

/*
if we want to access the value thorugh it's address
then it is defrenecing...
cout << *ptr

cout << * (&x)


 "An interesting property of pointers is that they can be used to access the variable they point
 directly, this is done by preceding the pointer name with the derefence operator(*). the operator itself can be
 read as  ----------value pointed by ---------"
*/

/*
Null Pointer:

SOmetimes it is useful to make our pointers point to nothing, this is called Null pointer.

we assign a pointer a null value by setting it to address 0:

int *p = 0;
int *q = NULL;


IF YOU DEFRENCE THE NULL POINTER THEN:

cout << * p

you will get an error "Segmentation falut"


*/
int main()
{

    int *xptr = 0; // we initize value with NULL

    cout << *xptr; // THIS WILL GIVE SEGMENTATION FAULT

    return 0;
}