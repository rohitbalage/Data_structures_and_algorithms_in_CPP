/*
(Bitwise)
write the function to check if a number is odd or even

logic:

1 : 00001
2 : 00010
3 : 00011
4 : 00100
5 : 00101
if last bit is 1  : odd number
*/

#include <iostream>
using namespace std;

int main ()
{

int x;
cin >> x;

if( x & 1)
{
   cout << "Odd"; 
}
else{
cout << "Even";
}
return 0;
}

