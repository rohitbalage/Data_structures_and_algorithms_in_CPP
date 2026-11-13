/**
 * 
 * Given an integer n, compute the sum of all natural numbers from 1 to n (inclusive). If n is 0, the sum should be 0.
 * 
 * 
 * Input: n = 6
Output: 21
Explanation: The sum of natural numbers up to 6 is: 1 + 2 + 3 + 4 + 5 + 6 = 21.
 */


#include <iostream>
using namespace std;
int main()

{
    int n;
    cin >> n;
    int sum =0;
    
    for(int i =0; i<=n; i++)
    {
      sum+=i;
    }

    cout << sum;
    
    return 0;
}