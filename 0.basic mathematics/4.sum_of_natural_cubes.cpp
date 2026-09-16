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