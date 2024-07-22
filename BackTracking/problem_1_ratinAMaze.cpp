#include <bits/stdc++.h> 
using namespace std;

bool isSafe(int newX, int newY, vector<vector<bool>> &visited, vector<vector<int>> &arr, int n) {
    if (((newX >= 0 && newX < n) && (newY >= 0 && newY < n)) && !visited[newX][newY] && arr[newX][newY] == 1) {
        return true;
    }
    return false;
}

void solve(int x, int y, vector<vector<int>> &arr, int n, vector<string> &ans, vector<vector<bool>> &visited, string path) {
    // Base case
    if (x == n - 1 && y == n - 1) {
        ans.push_back(path);
        return;
    }
    
    // Mark the cell as visited
    visited[x][y] = true;
    
    // 4 possible movements: down, left, right, up
    // Down
    if (isSafe(x + 1, y, visited, arr, n)) {
        solve(x + 1, y, arr, n, ans, visited, path + 'D');
    }
    
    // Left
    if (isSafe(x, y - 1, visited, arr, n)) {
        solve(x, y - 1, arr, n, ans, visited, path + 'L');
    }
    
    // Right
    if (isSafe(x, y + 1, visited, arr, n)) {
        solve(x, y + 1, arr, n, ans, visited, path + 'R');
    }
    
    // Up
    if (isSafe(x - 1, y, visited, arr, n)) {
        solve(x - 1, y, arr, n, ans, visited, path + 'U');
    }
    
    // Unmark the cell as visited (backtracking)
    visited[x][y] = false;
}

vector<string> searchMaze(vector<vector<int>> &arr, int n) {
    vector<string> ans;
    vector<vector<bool>> visited(n, vector<bool>(n, false));
    string path = "";
    
    // Start solving from the top-left corner of the maze
    if (arr[0][0] == 1) {
        solve(0, 0, arr, n, ans, visited, path);
    }
    
    return ans;
}
