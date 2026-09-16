/**
 * 
 * Given an integer n, calculate the sum of series 13 + 23 + 33 + 43 + … till n-th term.

Examples:

Input: n = 5
Output: 225
Explanation: 13 + 23 + 33 + 43 + 53 = 225
Input: n = 7
Output: 784
Explanation: 13 + 23 + 33 + 43 + 53 + 63 + 73 = 784
Constraints:

1 ≤ n ≤ 200
 */

class Solution {
  public:
    int sumOfSeries(int n) {
    
        // Calculate sum of first n natural numbers
           long long total_sum = (n * (n + 1)) / 2;

           // Square the sum to get the sum of cubes
           long long final_sum = total_sum * total_sum;

           return final_sum;
    }
};