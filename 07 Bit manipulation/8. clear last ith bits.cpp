/*

 for :
      i
    1 1 0 1    ~(1 << i)
  & 1 0 1 1   ~(0 1 0 0 ) 
  -----------
    1 0 0 1
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
n =  (n |mask);
}

void clearIthBit ( int &n, int i)
{
    int mask = ~(1 << i);
    n = n & mask;
}

void clearLastIBits(int &n, int i)
{
   int mask = (-1 << i);
   n = n & mask; 
}

 
int main(){
    int n = 15;
    int i = 2;
   
    clearLastIBits(n, i);
    cout << n;


 return 0;   
}