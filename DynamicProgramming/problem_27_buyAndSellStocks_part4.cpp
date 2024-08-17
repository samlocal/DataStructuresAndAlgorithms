#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
int solve(int index,int operationNo, int k,vector<int> &prices)
{
    if(index==prices.size()) return 0;
    if(operationNo>=(2*k)) return 0;

    int profit=0;
    if(operationNo %2==0){
        //buy allowed
        int buyKaro=-prices[index]+solve(index+1,operationNo+1,k,prices);
        int skipKaro=0+solve(index+1,operationNo,k,prices);
        profit=max(buyKaro,skipKaro);
    }
    else{
        //sell allowed
        int buyKaro=prices[index]+solve(index+1,operationNo+1,k,prices);
        int skipKaro=0+solve(index+1,operationNo,k,prices);
        profit=max(buyKaro,skipKaro);
    }
    return profit;
}
int solveRecMem(int index,int operationNo, int k,vector<int> &prices,vector<vector<int>>&dp)
{
    
    if(index==prices.size()) return 0;
    if(operationNo>=(2*k)) return 0;

    if(dp[index][operationNo]!=-1) return dp[index][operationNo];

    int profit=0;
    if(operationNo %2==0){
        //buy allowed
        int buyKaro=-prices[index]+solveRecMem(index+1,operationNo+1,k,prices,dp);
        int skipKaro=0+solveRecMem(index+1,operationNo,k,prices,dp);
        profit=max(buyKaro,skipKaro);
    }
    else{
        //sell allowed
        int buyKaro=prices[index]+solveRecMem(index+1,operationNo+1,k,prices,dp);
        int skipKaro=0+solveRecMem(index+1,operationNo,k,prices,dp);
        profit=max(buyKaro,skipKaro);
    }
    return dp[index][operationNo]=profit;    
}
int solveTab(int k,vector<int> &prices)
{
    int n=prices.size();
    vector<vector<int>>dp(n+1+1,vector<int>((2*k)+1+1,0));

    int profit=0;
    for(int index=n-1;index>=0;index--)
    {
        for(int operationNo=(2*k);operationNo>=0;operationNo--)
        {
            if(operationNo %2==0){
        //buy allowed
        int buyKaro=-prices[index]+dp[index+1][operationNo+1];
        int skipKaro=0+dp[index+1][operationNo];
        profit=max(buyKaro,skipKaro);
    }
    else{
        //sell allowed
        int buyKaro=prices[index]+dp[index+1][operationNo+1];
        int skipKaro=0+dp[index+1][operationNo];
        profit=max(buyKaro,skipKaro);
    }
     dp[index][operationNo]=profit; 

        }
    }
    return dp[0][0];
}
int spaceoptimization(int k, vector<int> &prices) {
    vector<int> curr((2*k) + 1, 0);
    vector<int> next((2*k) + 1, 0);
    int n = prices.size();

    int profit = 0;
    for (int index = n - 1; index >= 0; index--) {
        for (int operationNo = (2*k) - 1; operationNo >= 0; operationNo--) {  // Start from (2*k) - 1
            if (operationNo % 2 == 0) {
                // Buy allowed
                int buyKaro = -prices[index] + next[operationNo + 1];
                int skipKaro = 0 + next[operationNo];
                profit = max(buyKaro, skipKaro);
            } else {
                // Sell allowed
                int sellKaro = prices[index] + next[operationNo + 1];
                int skipKaro = 0 + next[operationNo];
                profit = max(sellKaro, skipKaro);
            }
            curr[operationNo] = profit;
        }
        next = curr;  // Move current results to the next
    }
    return curr[0];
}

    int maxProfit(int k, vector<int>& prices) {
        /*Recursion
        return solve(0,0,k,prices);
        */
        
        /*Rec + Mem
        int n=prices.size();
        vector<vector<int>>dp(n+1,vector<int>((2*k)+1,-1));
        return solveRecMem(0,0,k,prices,dp);
        */
        
        /*Tabulation
        return solveTab(k,prices);
        */

        return spaceoptimization(k,prices);


    }
};