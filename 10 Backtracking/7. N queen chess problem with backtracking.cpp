/*

N queen problem:


N-Queen is the problem of placing N chess queens on an 
N*N chessboard so that no two queens attack each other.


input:
N =4


output:
2D matrix with quees



*/

#include <iostream>
using namespace std;

bool canPlace(int board[][20], int n, int x, int y) {
    // Check column (above current row)
    for (int k = 0; k < x; k++) {
        if (board[k][y] == 1) return false;
    }

    // Left diagonal (check upwards)
    int i = x - 1;
    int j = y - 1;
    while (i >= 0 && j >= 0) {
        if (board[i][j] == 1) return false;
        i--; j--;
    }

    // Right diagonal (check upwards)
    i = x - 1;
    j = y + 1;
    while (i >= 0 && j < n) {
        if (board[i][j] == 1) return false;
        i--; j++;
    }

    return true;
}

void printBoard(int n, int board[][20]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << (board[i][j] ? "Q " : ". ");
        }
        cout << endl;
    }
    cout << endl;
}

bool solveNQueen(int n, int board[][20], int i) {
    // Base Case: All queens are placed
    if (i == n) {
        printBoard(n, board);
        return true;
    }

    // Recursive Case: Try to place queen in every column of current row 'i'
    for (int j = 0; j < n; j++) {
        if (canPlace(board, n, i, j)) {
            board[i][j] = 1; // Place queen
            
            bool success = solveNQueen(n, board, i + 1);
            if (success) {
                return true; 
            }

            // Backtrack: Remove queen if it didn't lead to a solution
            board[i][j] = 0;
        }
    }
    
    // AFTER trying all columns, if none worked, return false
    return false;
}

int main() {
    int board[20][20] = {0};
    int n;
    cout << "Enter board size (N): ";
    cin >> n;

    if (!solveNQueen(n, board, 0)) {
        cout << "No solution exists for N = " << n << endl;
    }

    return 0;
}