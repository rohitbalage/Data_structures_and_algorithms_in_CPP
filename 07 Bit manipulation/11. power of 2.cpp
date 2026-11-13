#include <iostream>

using namespace std;

/*
power of 2

if 16 = 10000
   15 = 01111


*/

int main()

{
    int n;
    cin>>n;
    if((n & (n-1))==0)
    {
        cout << "Power of 2";
    }
    else{
        cout <<"Not a power of 2";
    }

    return 0;
}