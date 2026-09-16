/*
Given a matrix of size M x N, there are large number of queries to find submatrix sums. Inputs to queries are left top and right bottom indexes of submatrix whose sum is to find out.

How to preprocess the matrix so that submatrix sum queries can be performed in O(1) time.



INPUT FORMAT:

Given a matrix (2d vector) and query.. Each query has Starting row, Starting column, Ending row, Ending column.



OUTPUT FORMAT:

A single integer which is the sum of the submatrix.


Example :

tli :  Row number of top left of query submatrix
tlj :  Column number of top left of query submatrix
rbi :  Row number of bottom right of query submatrix
rbj :  Column number of bottom right of query submatrix
 
Input: mat[M][N] = {{1, 2, 3, 4, 6},
                    {5, 3, 8, 1, 2},
                    {4, 6, 7, 5, 5},
                    {2, 4, 8, 9, 4} };
Query1: tli = 0, tlj = 0, rbi = 1, rbj = 1
Query2: tli = 2, tlj = 2, rbi = 3, rbj = 4
Query3: tli = 1, tlj = 2, rbi = 3, rbj = 3;
 
Output:
Query1: 11  // Sum between (0, 0) and (1, 1)
Query2: 38  // Sum between (2, 2) and (3, 4)
Query3: 38  // Sum between (1, 2) and (3, 3)

*/


#include <bits/stdc++.h>
using namespace std;

int sum(vector<vector<int>> v, int sr, int sc, int er, int ec) {
    int m = v.size();
    int n = v[0].size();

    // Build prefix sum matrix
    vector<vector<int>> prefix(m, vector<int>(n, 0));

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            prefix[i][j] = v[i][j];

            if (i > 0) prefix[i][j] += prefix[i - 1][j];
            if (j > 0) prefix[i][j] += prefix[i][j - 1];
            if (i > 0 && j > 0) prefix[i][j] -= prefix[i - 1][j - 1];
        }
    }

    // Compute submatrix sum in O(1)
    int result = prefix[er][ec];

    if (sr > 0) result -= prefix[sr - 1][ec];
    if (sc > 0) result -= prefix[er][sc - 1];
    if (sr > 0 && sc > 0) result += prefix[sr - 1][sc - 1];

    return result;
}