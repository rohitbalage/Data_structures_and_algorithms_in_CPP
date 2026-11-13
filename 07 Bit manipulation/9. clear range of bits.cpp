/**
 *   input ~  11110010110  [clear numbers from index i to j]
 * 
 * 
 * 
 * 
 * 
 * 
 * 
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

void clearIBitsInRange(int &n, int i, int j)
{
   int a= (~0)<<(j+1);
   int b=(1<<i) -1;
   int mask=a|b;
   n=n &mask;
}

 
int main(){
    int n = 31;
    int i = 1;
    int j=3;
    clearIBitsInRange(n,i,j);
    cout << n <<endl;

 return 0;   
}