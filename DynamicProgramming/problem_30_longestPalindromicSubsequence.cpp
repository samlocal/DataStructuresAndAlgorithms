#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int solve(string s, int i, int j) {
        // Base cases
        if (i > j)
            return 0; // If the pointers cross, no palindromic subsequence can
                      // be formed.
        if (i == j)
            return 1; // A single character is a palindrome of length 1.

        int maxi = 0;

        if (s[i] == s[j]) {
            // If characters match, they can be part of the palindromic
            // subsequence
            maxi = 2 + solve(s, i + 1, j - 1);
        } else {
            // If characters don't match, move either the left pointer or the
            // right pointer
            maxi = max(solve(s, i + 1, j), solve(s, i, j - 1));
        }
        return maxi;
    }

    int solveRecMem(string s, int i, int j, vector<vector<int>>& dp) {
        if (i > j)
            return 0;
        if (i == j)
            return 1;

        if (dp[i][j] != -1)
            return dp[i][j];

        int maxi = 0;

        if (s[i] == s[j]) {
            // If characters match, they can be part of the palindromic
            // subsequence
            maxi = 2 + solveRecMem(s, i + 1, j - 1, dp);
        } else {
            // If characters don't match, move either the left pointer or the
            // right pointer
            maxi =
                max(solveRecMem(s, i + 1, j, dp), solveRecMem(s, i, j - 1, dp));
        }
        return dp[i][j] = maxi;
    }

    int solveTab(string s) {
    int n = s.length();
    vector<vector<int>> dp(n, vector<int>(n, 0));

    // Initialize the diagonal elements (single characters)
    for (int i = 0; i < n; i++) {
        dp[i][i] = 1;
    }

    // Fill the DP table
    for (int i = n - 1; i >= 0; i--) {
        for (int j = 0; j < n; j++) {
            if (i < j) {
                if (s[i] == s[j]) {
                    if (i + 1 < n && j - 1 >= 0) {
                        dp[i][j] = 2 + dp[i + 1][j - 1];
                    } else {
                        dp[i][j] = 2;  // When i+1 and j-1 are out of bounds
                    }
                } else {
                    dp[i][j] = max(dp[i + 1][j], dp[i][j - 1]);
                }
            }
        }
    }

    return dp[0][n - 1];
}

int solveTab(string s) {
    int n = s.length();
    vector<int> prev(n, 0); // Represents dp[i+1][...]
    vector<int> curr(n, 0); // Represents dp[i][...]

    // Initialize for single characters (base case)
    for (int i = 0; i < n; i++) {
        prev[i] = 1;
    }

    // Fill the dp table
    for (int i = n - 2; i >= 0; i--) {
        curr[i] = 1; // Every single character is a palindrome of length 1
        for (int j = i + 1; j < n; j++) {
            if (s[i] == s[j]) {
                curr[j] = 2 + prev[j - 1];
            } else {
                curr[j] = max(prev[j], curr[j - 1]);
            }
        }
        // Move the current row to previous row
        prev = curr;
    }

    return prev[n - 1];
}


    int longestPalindromeSubseq(string s) {
        /*Recursion
        int n = s.length();
        return solve(s, 0, n - 1);
        */

        /*Rec mem
        int n = s.length();
        vector<vector<int>> dp(s.length() + 1, vector<int>(s.length() + 1, -1));
        return solveRecMem(s, 0, n - 1, dp);
        */

        return solveTab(s);
    }
};
