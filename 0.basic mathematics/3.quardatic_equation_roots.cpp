#include <iostream>

// We use the standard namespace for clean input/output code
using namespace std;

class Solution {
  public:
    int gcd(int a, int b) {
        // While the second number is not zero
        while (b != 0) {
            int remainder = a % b;
            a = b;          // Update a to be the smaller number
            b = remainder;  // Update b to be the remainder
        }
        return a; // When b becomes 0, a is the GCD
    }
};

int main() {
    // 1. Create an object of the Solution class
    Solution solver;
    
    // 2. Define the input variables
    int num1 = 20;
    int num2 = 28;
    
    // 3. Call the gcd function using our object
    int result = solver.gcd(num1, num2);
    
    // 4. Print the final answer to the terminal
    cout << "The GCD of " << num1 << " and " << num2 << " is: " << result << endl;
    
    return 0;
}
