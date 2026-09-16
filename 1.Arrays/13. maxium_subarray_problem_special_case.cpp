/*

Maximum Subarray Sum
Implement a function that takes an array as input and returns the maximum subarray sum.

Sample Input

1 -2 3 4 4 -2
5 0 -1 0 1 2 -1
Sample Output

11
7
Explanation : for test case one, A[2..4] is [3, 4, 4] and It has max sum 3 + 4 + 4 = 11,

Similarly for test case two, answer should be 7.



Note: Minimum size of the subarray should be 1.

*/

#include <bits/stdc++.h>

using namespace std;

int maxSubarray(vector<int> arr)
{

    bool allNeg = true;

    int largest = INT_MIN;

    for (int x : arr)
    {
        if (x > 0)
        {
            allNeg = false;
        }
        largest = max(largest, x);
    }

    // special case

    if (allNeg)
    {
        return largest;
    }

    // kadane's logic
    int cs = 0;
    int ans = 0;
    for (int x : arr)
    {
        cs = cs + x;
        if (cs < 0)
        {
            cs = 0;
        }
        ans = max(ans, cs);
    }

    return ans;
}