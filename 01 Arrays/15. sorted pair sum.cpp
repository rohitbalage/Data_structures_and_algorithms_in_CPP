/*
Sorted Pair Sum
Given a sorted array and a number x, find a pair in array whose sum is closest to x.

Input Format

In the function an integer vector and number x is passed.

Output Format

Return a pair of integers.



Sample Input

{10, 22, 28, 29, 30, 40}, x = 54


Sample Output

22 and 30


*/

#include <bits/stdc++.h>
using namespace std;

pair<int, int> classSum(vector<int> arr, int x)
{

    int n = arr.size();

    int s = 0, e = n - 1;
    int leftIdx, rightIdx;

    while (s < e)
    {
        int cs = arr[s] + arr[e];

        // update the difference

        if (abs(cs - x) < diff)
        {
            leftIdx = s;
            rightIdx = e;
            diff = abs(cs - x);
        }
        s++ or e--
    }
}
