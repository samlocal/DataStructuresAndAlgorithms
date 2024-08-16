#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
int solve(int n)
{
    if(n<=1) return 1;
    int ans=0;
    for(int i=1;i<=n;i++)
    {
        ans+=solve(i-1)*solve(n-i);
    }
    return ans;
}
int solveRecMem(int n,vector<int>&dp)
{
    if(n<=1) return 1;
    if(dp[n]!=-1) return dp[n];
    int ans=0;
    for(int i=1;i<=n;i++)
    {
        ans+=solveRecMem(i-1,dp)*solveRecMem(n-i,dp);
    }
    return dp[n]=ans;
}
int solveTab(int n)
{
    vector<int>dp(n+1,0);
    dp[0]=1;
    dp[1]=1;
    

    for(int i=2;i<=n;i++) //i = no of nodes
    {
        for(int j=1;j<=i;j++) // j = root node
        {
            dp[i]+=dp[j-1]*dp[i-j];
        }
    }
    return dp[n];
}

    int numTrees(int n) {
        /*Recursion
        return solve(n);
        */
        
        /*Rec + Mem
        vector<int>dp(n+1,-1);
        return solveRecMem(n,dp);
        */

        return solveTab(n);

    }
};