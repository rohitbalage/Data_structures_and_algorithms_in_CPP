/**
 * Pascal's Triangle
Pascal’s triangle is a triangular array of the binomial coefficients. Write a function that takes an integer value n as input and returns 2D array with first n lines of the Pascal’s triangle.

Following are the first 5 rows of Pascal’s Triangle.

1

1 1

1 2 1

1 3 3 1

1 4 6 4 1

Input Format

In the function an integer N is passed.

Output Format

Return the output as vector of vectors.
 * 
 * 
 * 
 */

 #include<bits/stdc++.h>
using namespace std;

vector<vector<int>> printPascal(int n)
{
     vector<vector<int>> triangle;

    for (int i = 0; i < n; i++) {
        vector<int> row(i + 1, 1);   // initialize row with 1s

        for (int j = 1; j < i; j++) {
            row[j] = triangle[i - 1][j - 1] + triangle[i - 1][j];
        }

        triangle.push_back(row);
    }

    return triangle;
    
}