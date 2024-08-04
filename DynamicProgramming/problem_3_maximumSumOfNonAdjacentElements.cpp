//Using Recursion
/*
#include <bits/stdc++.h> 
int solveRec(vector<int> &nums, int i)
{
    //base case
    if(i<0) return 0;
    if(i==0) return nums[0];

    int include=solve(nums,i-2)+nums[i];
    int exclude=solve(nums,i-1)+0;

    return max(include,exclude);
}
int maximumNonAdjacentSum(vector<int> &nums){
    int n=nums.size();
    int ans=solve(nums,n-1);//solving from right to left
    return ans;
}***********************************************/

//Using Rec+Memo
/*#include <bits/stdc++.h> 
int solveRecMem(vector<int> &nums,vector<int> &dp, int i)
{
    if(i<0) return 0;
    if(i==0) return nums[0];

    if(dp[i]!=-1) return dp[i];

    int include=solveRecMem(nums, dp, i-2)+nums[i];
    int exclude=solveRecMem(nums, dp, i-1)+0;

    dp[i]=max(include,exclude);
    return dp[i];
}
int maximumNonAdjacentSum(vector<int> &nums){
    int n=nums.size();
    vector<int>dpArray(n , -1);
    return solveRecMem(nums,dpArray,n-1);


}******************************************************/
//Using Tabulation
/**
 * #include <bits/stdc++.h> 
int solveTabulation(vector<int> &nums)
{
    int n=nums.size();
    vector<int>dp(n,0);

    dp[0]=nums[0];

    for(int i=1;i<n;i++)
    {
        int inc=dp[i-2]+nums[i];
        int exc=dp[i-1]+0;
        dp[i]=max(inc,exc);
    }

    return dp[n-1];
}
int maximumNonAdjacentSum(vector<int> &nums){
     return solveTabulation(nums);
}********************************************************** */
//Using Space Optimization
/*
#include <bits/stdc++.h> 
int solveSpaceOpt(vector<int> &nums)
{
    int prev2=0; //because i<0 = 0
    int prev1=nums[0]; //because i==0 return nums[0]

    for(int i=1;i<nums.size();i++)
    {
        int inc=prev2+nums[i];
        int exc=prev1+0;
        int ans=max(inc,exc);
        prev2=prev1;
        prev1=ans;
    }
    return prev1;
}
int maximumNonAdjacentSum(vector<int> &nums){
    return solveSpaceOpt(nums);
}**********************/