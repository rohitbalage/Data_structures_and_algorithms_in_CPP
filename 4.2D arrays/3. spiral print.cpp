/*
write a function that takes in n * m  2D array
and prints the all arrays elements in a spiral order.
start from top left corner goes to right, proceeds in a spiral
pattern until every element in visited.

input:
 1 2 3 4
 5 6 7 8
 9 10 11 12
 13 14 15 16

 output:
 1 2 3 4  8 12 16 15 14 13  9 5 6 7 11 10

start row (start col .... end row)
end col (startRow ..... end Row)
end row (end column ...... start col)
start col (end row -1.......... start row+1)

*/
#include <iostream>
using namespace std;

void spiralPrint(int arr[][10], int n, int m)
{
    //  4 variables

    int startRow = 0;
    int endRow = n - 1;
    int startCol = 0;
    int endCol = m - 1;

    // outer loop (Traverse array bondary)
    while (startCol <= endCol and startRow <= endRow)
    {
        // Start Row
        for (int col = startCol; col <= endCol; col++)
        {
            cout << arr[startRow][col] << " ";
        }
        // End Col
        for (int row = startRow + 1; row <= endRow; row++)
        {
            if (startRow == endRow)
            {
                break;
            }
            cout << arr[row][endCol] << " ";
        }
        //  End Row
        for (int col = endCol - 1; col >= startCol; col--)
        {
            cout << arr[endRow][col] << " ";
        }
        // Start Col
        for (int row = endRow - 1; row >= startRow + 1; row--)
        {
            // avoid duplicate printing of elements
            if (startCol == endCol)
            {
                break;
            }
            cout << arr[row][startCol] << " ";
        }
        startRow++;
        endRow--;
        startCol++;
        endCol--;
    }
}

int main()
{
    // Print in spiral form

    int arr[][10] = {{1, 2, 3, 4},
                     {12, 13, 14, 5},
                     {11, 16, 15, 6},
                     {10, 9, 8, 7}};

    int n = 4, m = 4;
    spiralPrint(arr, n, m);
    return 0;
}
