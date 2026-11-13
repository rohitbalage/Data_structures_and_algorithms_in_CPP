/*

Get the ith bit of the number
      index: 543210
for eg.  5 : 000101

find a bit at index 2.
here we first do   1 << i (one left shit i)

and then we do and here, and we will get:
000100  

 if this number > 0: that means the bit is 1
 or else it is 0

*/

#include <iostream>
using namespace std;
int getIntBit(int n, int i)
{
    int mask = ( 1 << i);
    return (n & mask) > 0 ? 1 : 0;
}

int main(){
    int n = 5;
    int i;
    cin >> i;
    cout << getIntBit(n,i) << endl;

 return 0;   
}