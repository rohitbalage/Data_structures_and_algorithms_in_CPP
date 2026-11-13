/*
print numbers 1....N recursively in 
*decreasing order
*increasing order

N =5 
increasing : 1,2,3,4,5
decreasing : 5,4,3,2,1
*/
#include <iostream>
using namespace std;
void dec(int n)
{
    if(n ==0)
    {
        return;
    }
    // towards the base case:
    cout<< n << " ,"; // here cout first
    dec(n-1); // decreasing
}

void inc(int n)
{
    if(n ==0)
    {
        return;
    }
    // towards the base case:
     inc(n-1);  // increasing
    cout<< n << " ,"; // here cout later
   
}


int main()
{
    int n;
    cin >> n;
    dec(n);
    cout <<endl;
    inc(n);
    return 0;

}