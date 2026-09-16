#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;


class Solution {
  public:
    vector<int> quadraticRoots(int a, int b, int c) {
        vector<int> final_result;

        // 1. Calculate discriminant using 64-bit precision to prevent integer overflow
        long long discriminant = (long long)b * b - 4 * a * c;

        // 2. If roots are imaginary, return {-1}
        if (discriminant < 0) {
            final_result.push_back(-1);
            return final_result;
        }

        // 3. Compute precise roots using double precision
        double root1 = (-b + sqrt(discriminant)) / (2.0 * a);
        double root2 = (-b - sqrt(discriminant)) / (2.0 * a);

        // 4. Apply mathematical floor to round down toward negative infinity
        int x = floor(root1);
        int y = floor(root2);

        // 5. Place roots in decreasing order (largest value first)
        if (x >= y) {
            final_result.push_back(x);
            final_result.push_back(y);
        } else {
            final_result.push_back(y);
            final_result.push_back(x);
        }

        return final_result;
    }
};
