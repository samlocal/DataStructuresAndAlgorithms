#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
int solve(int index,int buy,vector<int> &prices,int limit)
{
    if(index==prices.size() || limit==0) return 0;

    int profit=0;

    if(buy)
    {
        profit=max(-prices[index]+solve(index+1,0,prices,limit) , 
        0+solve(index+1,1,prices,limit));
    }
    else
    {
        profit=max(prices[index]+solve(index+1,1,prices,limit-1) , 
        0+solve(index+1,0,prices,limit));
    }

    return profit;
}

int solveRecMem(int index,int buy,vector<int> &prices,int limit,vector<vector<vector<int>>>&dp)
{
    if(index==prices.size() || limit==0) return 0;

    if(dp[index][buy][limit] !=-1) return dp[index][buy][limit];

    int profit=0;

    if(buy)
    {
        profit=max(-prices[index]+solveRecMem(index+1,0,prices,limit,dp) , 
        0+solveRecMem(index+1,1,prices,limit,dp));
    }
    else
    {
        profit=max(prices[index]+solveRecMem(index+1,1,prices,limit-1,dp) , 
        0+solveRecMem(index+1,0,prices,limit,dp));
    }

    return dp[index][buy][limit]=profit;
}

int solveTab(vector<int> &prices)
{
    int n=prices.size();
    vector<vector<vector<int>>>dp(n+1, vector<vector<int>>(2,vector<int>(3,0)));

    int profit=0;
    for(int index=n-1;index>=0;index--)
    {
        for(int buy=0;buy<=1;buy++)
        {
            for(int limit=1;limit<=2;limit++)
            {
                if(buy)
                    {
                        profit=max(-prices[index]+dp[index+1][0][limit] , 
                         0+dp[index+1][1][limit]);
                    }
                else
                    {
                         profit=max(prices[index]+dp[index+1][1][limit-1] , 
                          0+dp[index+1][0][limit]);
                   }

                 dp[index][buy][limit]=profit;
            }
        }
    }
    return dp[0][1][2];
}

int spaceOptimization(vector<int>&prices)
{
     int n=prices.size();
    vector<vector<int>>curr(2,vector<int>(3,0));
    vector<vector<int>>next(2,vector<int>(3,0));

    int profit=0;
    for(int index=n-1;index>=0;index--)
    {
        for(int buy=0;buy<=1;buy++)
        {
            for(int limit=1;limit<=2;limit++)
            {
                if(buy)
                    {
                        profit=max(-prices[index]+next[0][limit] , 
                         0+next[1][limit]);
                    }
                else
                    {
                         profit=max(prices[index]+next[1][limit-1] , 
                          0+next[0][limit]);
                   }

                 curr[buy][limit]=profit;
            }
            next=curr;
        }
    }
    return curr[1][2];


}

    int maxProfit(vector<int>& prices) {
        /*Recursion
        return solve(0,1,prices,2);
        */
        
        /*Rec + Mem
        int n=prices.size();
        vector<vector<vector<int>>>dp(n+1, vector<vector<int>>(2,vector<int>(3,-1)));
        return solveRecMem(0,1,prices,2,dp);
        */
        
        /*Tabulation
        return solveTab(prices);
        */

        return spaceOptimization(prices);


    }
};