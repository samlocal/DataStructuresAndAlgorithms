#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int solveRec(vector<int>& values, int i, int j) {
        // base case - having only two nodes
        if (i + 1 == j) {
            return 0;
        }

        int ans = INT_MAX;

        for (int k = i + 1; k < j; k++) {
            ans = min(ans, values[i] * values[j] * values[k] +
                               solveRec(values, i, k) + solveRec(values, k, j));
        }
        return ans;
    }
    int solveRecMem(vector<int>& values, int i, int j,
                    vector<vector<int>>& dp) {
        if (i + 1 == j)
            return 0;

        if (dp[i][j] != -1)
            return dp[i][j];

        int ans = INT_MAX;
        for (int k = i + 1; k < j; k++) {
            ans = min(ans, values[i] * values[j] * values[k] +
                               solveRecMem(values, i, k, dp) +
                               solveRecMem(values, k, j, dp));
        }

        dp[i][j] = ans;
        return dp[i][j];
    }
    int solveTab(vector<int>& values)
    // reverse to the recmem sol
    {
        int n = values.size();
        vector<vector<int>> dp(n, vector<int>(n, 0));

        for (int i = n - 1; i >= 0; i--) {
            for (int j = i + 2; j < n; j++) {

                int ans = INT_MAX;
                for (int k = i + 1; k < j; k++) {
                    ans = min(ans, values[i] * values[j] * values[k] +
                                       dp[i][k] + dp[k][j]);
                }
                dp[i][j]=ans;
            }
        }
        return dp[0][n-1];
    }
    int minScoreTriangulation(vector<int>& values) {
        /*Recurson
        return solveRec(values,0,values.size()-1);
        */

        /*Recursion + Memorization
        int n=values.size();
        vector<vector<int>>dp(n , vector<int>(n,-1));
        return solveRecMem(values,0,n-1,dp);
        */

        return solveTab(values);
    }
};