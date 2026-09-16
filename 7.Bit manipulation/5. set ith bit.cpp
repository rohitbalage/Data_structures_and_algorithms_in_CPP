/*
lets say the number is 5:  101

and I want to set bit at ith index.

now index is 2:

010
is the answer:

we do (1 << i)
and then bitwise OR.

    1 0 1
    0 1 0
----------------
    1 1 1

*/

#include <iostream>
using namespace std;
int getIntBit(int n, int i)
{
    int mask = ( 1 << i);
    return (n & mask) > 0 ? 1 : 0;
}

void setIthBit ( int &n, int i)
{
int mask = (1 << i);
n =  (n  |mask);
}

// another way:



int main(){
    int n = 5;
    int i;
    cin >> i;
    //cout << getIntBit(n,i) << endl;

    setIthBit(n, i);
    cout << n;


 return 0;   
}