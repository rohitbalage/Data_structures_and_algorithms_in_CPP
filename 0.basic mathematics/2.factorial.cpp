
// Given a positive integer, n. Find the factorial of n.

class Solution {
  public:
    int factorial(int n) {
        // code here
        if(n == 1 || n ==0)
        {
            return 1;
        }
        
        return n * factorial(n-1);
    }
};