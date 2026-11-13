#include <iostream>
using namespace std;
/*
binary left shift:

a << b

= a * 2^b

binary right shift:

*/


int main()

{

// a = 5(00000101), b = 9(00001001)
    unsigned char a = 5, b = 9;
 
    // The result is 00001010
    cout << "a<<1 = " << (a << 1) << endl;
 
    // The result is 00010010
    cout << "b<<1 = " << (b << 1) << endl;
    return 0;

 return 0;   
}