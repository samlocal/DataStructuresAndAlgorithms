#include <bits/stdc++.h>
using namespace std;

void addSolution(vector<vector<int>>& board, vector<vector<int>>& ans, int n) {
    vector<int> temp;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            temp.push_back(board[i][j]);
        }
    }
    ans.push_back(temp);
}

bool isSafe(int row, int col, vector<vector<int>>& board, int n) {
    int x = row;
    int y = col;

    // Check left side in the same row
    while (y >= 0) {
        if (board[x][y] == 1) return false;
        y--;
    }

    // Check upper diagonal on left side
    x = row;
    y = col;
    while (x >= 0 && y >= 0) {
        if (board[x][y] == 1) return false;
        x--;
        y--;
    }

    // Check lower diagonal on left side
    x = row;
    y = col;
    while (x < n && y >= 0) {
        if (board[x][y] == 1) return false;
        x++;
        y--;
    }

    return true;
}

void solve(int col, vector<vector<int>>& ans, vector<vector<int>>& board, int n) {
    // Base case - all queens are placed
    if (col == n) {
        addSolution(board, ans, n);
        return;
    }

    // Try placing the queen in all rows one by one
    for (int row = 0; row < n; row++) {
        if (isSafe(row, col, board, n)) {
            board[row][col] = 1; // Place the queen
            solve(col + 1, ans, board, n); // Recurse to place rest of the queens
            board[row][col] = 0; // Backtrack
        }
    }
}

vector<vector<int>> nQueens(int n) {
    vector<vector<int>> board(n, vector<int>(n, 0));
    vector<vector<int>> ans;
    solve(0, ans, board, n); // 0 is the starting column number
    return ans;
}
