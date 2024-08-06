//Using Recursion
/*
#include <bits/stdc++.h> 
int solveRec(vector<int> &weight, vector<int> &value, int index, int capacity)
{
    //base case
    if(index==0)
    {
        if(weight[0]<=capacity) return value[0];
        return 0;        
    }

    int include=0;
    int exclude=0;

    if(weight[index]<=capacity) include=value[index]+solveRec(weight, value, index-1, capacity-weight[index]);

    exclude=0+solveRec(weight, value, index-1, capacity);

    return max(exclude,include);
}
int knapsack(vector<int> weight, vector<int> value, int n, int maxWeight) 
{
	int ans=solveRec(weight,value,n-1,maxWeight);
    return ans;
}************************************************************* */

//Using Rec+Mem
/*#include <bits/stdc++.h> 
int solveRecMem(vector<int> &weight, vector<int> &value, int index, int capacity,vector<vector<int>>&dp)
{
    //base case
    if(index==0)
    {
        if(weight[0]<=capacity) return value[0];
        return 0;        
    }

    if(dp[index][capacity]!=-1) return dp[index][capacity];

    int include=0;
    int exclude=0;


    if(weight[index]<=capacity) include=value[index]+solveRecMem(weight, value, index-1, capacity-weight[index],dp);

    exclude=0+solveRecMem(weight, value, index-1, capacity,dp);

    dp[index][capacity] =max(exclude,include);
    return dp[index][capacity];
}
int knapsack(vector<int> weight, vector<int> value, int n, int maxWeight) 
{
	

    vector<vector<int>>dp(n,vector<int>(maxWeight+1,-1));

    int ans=solveRecMem(weight,value,n-1,maxWeight,dp);
    return ans;
}
******************************************************************/

//Using Tabulation
/*#include <bits/stdc++.h> 
int Tabulation(vector<int> &weight, vector<int> &value, int n, int capacity)
{
    //step 1:
    vector<vector<int>>dp(n,vector<int>(capacity+1,0));

    //step 2:
    for(int w=weight[0];w<=capacity;w++)
    {
        if(weight[0]<=capacity) dp[0][w]=value[0];
        else dp[0][w]=0;
    }

    //step 3:
    for(int index=1;index<n;index++)
    {
        for(int w=0;w<=capacity;w++)
        {
            int include=0;

            if(weight[index]<=w) include=value[index]+dp[index-1][w-weight[index]];

            int exclude=0+dp[index-1][w];

            dp[index][w]=max(exclude,include);
        }
    }

    return dp[n-1][capacity];
}
int knapsack(vector<int> weight, vector<int> value, int n, int maxWeight) 
{
	return Tabulation(weight,value,n,maxWeight);
}
********************************************************************/

//space Optimization
/*#include <bits/stdc++.h> 
int spaceOptimization(vector<int> &weight, vector<int> &value, int n, int capacity)
{
    //stemp 1:
    vector<int>prev(capacity+1,0);
    vector<int>curr(capacity+1,0);

    //step 2:
    for(int w=weight[0];w<=capacity;w++)
    {
        if(weight[0]<=capacity) prev[w]=value[0];
        else prev[w]=0;
    }

    //step 3:
    for(int index=1;index<n;index++)
    {
        for(int w=0;w<=capacity;w++)
        {
            int include=0;

            if(weight[index]<=w) include=value[index]+prev[w-weight[index]];

            int exclude=0+prev[w];

            curr[w]=max(include,exclude);
        }
        prev=curr;
    }

return prev[capacity];

}
int knapsack(vector<int> weight, vector<int> value, int n, int maxWeight) 
{
	return spaceOptimization(weight, value, n, maxWeight);
}
********************************************************************************/

//more space optimization:
/*
#include <bits/stdc++.h> 
int moreSpaceOptimization(vector<int> &weight, vector<int> &value, int n, int capacity)
{
    //stemp 1:
 
    vector<int>curr(capacity+1,0);

    //step 2:
    for(int w=weight[0];w<=capacity;w++)
    {
        if(weight[0]<=capacity) curr[w]=value[0];
        else curr[w]=0;
    }

    //step 3:
    for(int index=1;index<n;index++)
    {
        for(int w=capacity;w>=0;w--)
        {
            int include=0;

            if(weight[index]<=w) include=value[index]+curr[w-weight[index]];

            int exclude=0+curr[w];

            curr[w]=max(include,exclude);
        }
        
    }

return curr[capacity];

}
int knapsack(vector<int> weight, vector<int> value, int n, int maxWeight) 
{
	return moreSpaceOptimization(weight, value, n, maxWeight);
}
**********************************************************************/