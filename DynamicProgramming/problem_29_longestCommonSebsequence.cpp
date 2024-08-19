#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int solve(string text1, string text2, int i, int j) {
        if (i == text1.length() || j == text2.length())
            return 0;

        int maxi = 0;
        if (text1[i] == text2[j])
            maxi = 1 + solve(text1, text2, i + 1, j + 1);
        else {
            maxi = max(solve(text1, text2, i + 1, j),
                       solve(text1, text2, i, j + 1));
        }
        return maxi;
    }

    int solveRecMem(string text1, string text2, int i, int j,
                    vector<vector<int>>& dp) {
        if (i == text1.length() || j == text2.length())
            return 0;

        if (dp[i][j] != -1)
            return dp[i][j];

        int maxi = 0;
        if (text1[i] == text2[j])
            maxi = 1 + solveRecMem(text1, text2, i + 1, j + 1, dp);
        else {
            maxi = max(solveRecMem(text1, text2, i + 1, j, dp),
                       solveRecMem(text1, text2, i, j + 1, dp));
        }
        return dp[i][j] = maxi;
    }

    int solveTab(string text1, string text2) {
        vector<vector<int>> dp(text1.length() + 1,
                               vector<int>(text2.length() + 1, 0));

        for (int i = text1.length()-1; i >= 0; i--) {
            for (int j = text2.length()-1; j >= 0; j--) {
                int maxi = 0;
                if (text1[i] == text2[j])
                    maxi = 1 + dp[i+1][j+1];
                else {
                    maxi = max(dp[i+1][j],
                               dp[i][j+1]);
                }
                 dp[i][j] = maxi;
            }
        }
        return dp[0][0];
    }int spaceOptimization(string text1, string text2) {
    // Initialize vectors with an extra column for handling j+1 safely.
    vector<int> curr(text2.length() + 1, 0);
    vector<int> next(text2.length() + 1, 0);

    for (int i = text1.length() - 1; i >= 0; i--) {
        for (int j = text2.length() - 1; j >= 0; j--) {
            int maxi = 0;
            if (text1[i] == text2[j])
                maxi = 1 + next[j + 1]; // Safely accessing next[j+1]
            else {
                maxi = max(next[j], curr[j + 1]);
            }
            curr[j] = maxi;
        }
        next = curr;
    }
    return curr[0];
}

    int longestCommonSubsequence(string text1, string text2) {
        /*Recursion
        return solve(text1,text2,0,0);
        */

        /*Rec + Mem
        vector<vector<int>> dp(text1.length() + 1,
                               vector<int>(text2.length() + 1, -1));
        return solveRecMem(text1, text2, 0, 0, dp);
        */
        
        /*Tabulation
        return solveTab(text1,text2);
        */

        return spaceOptimization(text1,text2);

    }
};