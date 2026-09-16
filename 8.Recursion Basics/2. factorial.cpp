#include <iostream>
using namespace std;
/*
concept of callstack:
when your program started there is concept of callstack.

stack is a special memory, they goes inside stack.
here main function goes inside stack first (at bottom)

and now then it called function fact(5) ,
then fact (5) called fact(4) and then so on..

so for every call stack we call new function call inside stack.

once the base case reached so then we start the process of returning.


Time complexity: o(N) N calls, each call takes n time and complexity: O(N)

space complexity: o(N).  for max depth of n we have created n number of answer variables.

******************************************
Note: Recursion will take extra space coz of concept of implicit stack.
***************************************

*/


// Declaration of function
int fact(int x);

int main()
{
int n;
cin >> n;
cout << fact(n) <<endl;

return 0;
}

int fact(int n)
{
    if(n ==0)
    {
        return 1;
    }
    int ans = n * fact(n-1);
    return ans;
}