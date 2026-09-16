#include <iostream>
using namespace std;

/*
//Fast exponentitation

a^n 
5^3 = 125
3^5 = 3x3x3x3x3  [we are doing this in logn time]

3^101

so 101 =  a^4 a^2 a^1

*/


int fastExpo(int a, int n)
{
    int ans =1;
    while(n>0)
    {
        int last_bit = (n&1);
        if(last_bit)
        {
           ans = ans *a;     
        }
        a=  a*a;
        n= n>>1;
    }
    return ans;
}

int main()

{
    int a,n;
    cin >>a >>n;
    cout << fastExpo(a,n)<< endl;
    return 0;
}