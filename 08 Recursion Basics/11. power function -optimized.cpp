/*
write a function to find power of a
number, both number and power are given as input!

 a^n = a.a^n-1 
*/


#include <iostream>
using namespace std;

int power (int a, int n)
{

// base case:
if(n ==0)
{
    return 1;
}
return  a * power (a ,n-1);

}

int fastPower(int a, int n)
{
  if( n==0)
  {
    return 1;
  }  
int subProb = fastPower(a, n/2);
int subProbsq = subProb*subProb;

// check if n is odd: 

  if(n&1)
  {
    return a * subProbsq;
  }
  return subProbsq;
}

int main()
{
  int a, n;
  cin >> a>>n;
  cout << power(a,n)<< endl;
   cout << fastPower(a,n)<< endl; // fast power optimized
  return 0;
}
