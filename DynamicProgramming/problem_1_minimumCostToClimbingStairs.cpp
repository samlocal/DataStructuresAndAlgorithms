//Using Recursion
/*class Solution {
public:
int solve(vector<int>& cost,int k)
{
    //base case
    if(k==0) return cost[0];
    if(k==1) return cost[1];

    int ans=cost[k]+min(solve(cost,k-1),solve(cost,k-2));
    return ans;

}
    int minCostClimbingStairs(vector<int>& cost) {
        int n=cost.size();
        int ans=min(solve(cost,n-1),solve(cost,n-2)); //at nth stair
        return ans;
    }
};*/

//********************************************************************** */

//Using DynamicProgramming
//recursion+memorization
/*class Solution {
public:
int solve(vector<int>& cost,int k,vector<int> &dp)
{
    //base case
    if(k==0) return cost[0];
    if(k==1) return cost[1];

    if(dp[k]!=-1) return dp[k];



    //store and return
    dp[k]=cost[k]+min(solve(cost,k-1,dp),solve(cost,k-2,dp));
    return dp[k];
}
    int minCostClimbingStairs(vector<int>& cost) {
        int n=cost.size();
        vector<int>dp(n+1 , -1);
        int ans=min(solve(cost,n-1,dp),solve(cost,n-2,dp));
        return ans;       
    }
};*/

//***************************************************************** */

//Tabulation Approach
/*
class Solution {
public:
int solve( vector<int>&cost,int k)
{
     vector<int>dp(k+1);
     dp[0]=cost[0];
     dp[1]=cost[1];

     for(int i=2;i<k;i++)
     {
        dp[i]=cost[i]+min(dp[i-1],dp[i-2]);
     }
     return min(dp[k-1],dp[k-2]);
}
    int minCostClimbingStairs(vector<int>& cost) {
        int n=cost.size();
        
        return solve(cost,n);
    }
};*/

//****************************************************** */

//Space optimization
/*class Solution {
public:
int solve( vector<int>&cost,int k)
{
     
     int prev2=cost[0];
     int prev1=cost[1];

     for(int i=2;i<k;i++)
     {
        int minCost=cost[i]+min(prev1,prev2);
        prev2=prev1;
        prev1=minCost;
     }
     return min(prev1,prev2);
}
    int minCostClimbingStairs(vector<int>& cost) {
        int n=cost.size();
        
        return solve(cost,n);
    }
};*/