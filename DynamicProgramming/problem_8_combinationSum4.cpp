//Recursion
/**#include <bits/stdc++.h> 
int solveRec(vector<int> &nums,int target)
{
    //base case
    if(target==0) return 1;
    if(target<0) return 0;
    
    int ans=0;
    for(int i=0;i<nums.size();i++)
    {
         ans+=solveRec(nums,target-nums[i]);
    }
    return ans;
}
int findWays(vector<int> &num, int tar)
{
    return solveRec(num,tar);
} 
 * *****************************************************
 */

//Recursion + Memorization
/*#include <bits/stdc++.h> 
int solveRecMem(vector<int> &nums,int target,vector<int> &dp)
{
    //base case
    if(target==0) return 1;
    if(target<0) return 0;

    if(dp[target]!=-1) return dp[target];
    
    int ans=0;
    for(int i=0;i<nums.size();i++)
    {
         ans+=solveRecMem(nums,target-nums[i],dp);
    }
    dp[target]= ans;
    return dp[target];
}
int findWays(vector<int> &num, int tar)
{
    vector<int>dp(tar+1,-1);
    return solveRecMem(num,tar,dp);
} 
********************************************************/

//Tabulation
/*#include <bits/stdc++.h>

int Tabulation(vector<int> &num, int tar) {
  vector<int> dp(tar + 1, 0);
  dp[0] = 1; // using base case

  // traversing from tagret to 1
  for (int i = 1; i <= tar; i++) {
    // traversing on num vector
    for (int j = 0; j < num.size(); j++) {
      // checking for validity of index
      if (i - num[j] >= 0)
        dp[i] += dp[i - num[j]];
    }
  }

  return dp[tar];
}
int findWays(vector<int> &num, int tar) { return Tabulation(num, tar); }
********************************************************************/

//space optimization
/*
unpossible
*************************************************/