//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
public:
    int solveRec(int n, int a[], int currIndex, int prevIndex)
    {
        if (currIndex == n)
        {
            return 0;
        }

        // include
        int take = 0;
        if (prevIndex == -1 || a[currIndex] > a[prevIndex])
        {
            take = 1 + solveRec(n, a, currIndex + 1, currIndex);
        }

        // exclude
        int notTake = 0 + solveRec(n, a, currIndex + 1, prevIndex);

        return max(take, notTake);
    }

    int solveRecMem(int n, int a[], int currIndex, int prevIndex, vector<vector<int>> &dp)
    {
        if (currIndex == n)
        {
            return 0;
        }

        if (dp[currIndex][prevIndex + 1] != -1) // prevIndex+1 because prevIndex initial value is -1
        {
            return dp[currIndex][prevIndex + 1];
        }

        // include
        int take = 0;
        if (prevIndex == -1 || a[currIndex] > a[prevIndex])
        {
            take = 1 + solveRecMem(n, a, currIndex + 1, currIndex, dp);
        }

        // exclude
        int notTake = 0 + solveRecMem(n, a, currIndex + 1, prevIndex, dp);

        dp[currIndex][prevIndex + 1] = max(take, notTake);
        return dp[currIndex][prevIndex + 1];
    }

    int solveTab(int n, int a[])
    {
        vector<vector<int>> dp(n + 1, vector<int>(n + 1, 0));

        // analyzing base case
        // no need already initialized in declaration

        for (int currIndex = n - 1; currIndex >= 0; currIndex--)
        {
            for (int prevIndex = currIndex - 1; prevIndex >= -1; prevIndex--)
            {

                // include
                int take = 0;
                if (prevIndex == -1 || a[currIndex] > a[prevIndex])
                {
                    take = 1 + dp[currIndex + 1][currIndex + 1];
                }

                // exclude
                int notTake = 0 + dp[currIndex + 1][prevIndex + 1];

                dp[currIndex][prevIndex + 1] = max(take, notTake);
            }
        }

        return dp[0][-1 + 1];
    }

    int spaceOptimization(int n, int a[])
    {
        vector<int> currRow(n + 1, 0);
        vector<int> nextRow(n + 1, 0);

        for (int curr = n - 1; curr >= 0; curr--)
        {
            for (int prev = curr - 1; prev >= -1; prev--)
            {

                // include
                int take = 0;
                if (prev == -1 || a[curr] > a[prev])
                {
                    take = 1 + nextRow[curr + 1];
                }

                // exclude
                int notTake = 0 + nextRow[prev + 1];
                currRow[prev + 1] = max(take, notTake);
            }
            nextRow = currRow;
        }
        return nextRow[0];
    }

    int solveOptimalBinarySearch(int n, int a[])
    {
        if (n == 0)
            return 0;

        vector<int> ans;
        // first elemnt is alwyas included because its always longest increasing subsequence
        ans.push_back(a[0]);

        for (int i = 1; i < n; i++)
        {
            if (a[i] > ans.back())
                ans.push_back(a[i]);

            else
            {
                // finding the just bada element
                int index = lower_bound(ans.begin(), ans.end(), a[i]) - ans.begin();
                ans[index] = a[i];
            }
        }

        return ans.size();
    }
    // Function to find length of longest increasing subsequence.
    int longestSubsequence(int n, int a[])
    {
        /*Recursion
        int currIndex=0;
        int prevIndex=-1;
       return solveRec(n,a,currIndex,prevIndex);
       */

        /*Recursion + Memorization
        int currIndex=0;
        int prevIndex=-1;
        vector<vector<int>>dp(n,vector<int>(n+1,-1)); //n+1 because prevIndex start from -1
        return solveRecMem(n,a,currIndex,prevIndex,dp);
        */

        /*Tabulation
        return solveTab(n,a);
        */

        /*space optimization
        return spaceOptimization(n,a);
        */

        /*Binary Search
        return solveOptimalBinarySearch(n,a);
        */
    }
};

//{ Driver Code Starts.
int main()
{
    // taking total testcases
    int t, n;
    cin >> t;
    while (t--)
    {
        // taking size of array
        cin >> n;
        int a[n];

        // inserting elements to the array
        for (int i = 0; i < n; i++)
            cin >> a[i];
        Solution ob;
        // calling method longestSubsequence()
        cout << ob.longestSubsequence(n, a) << endl;
    }
}

// } Driver Code Ends