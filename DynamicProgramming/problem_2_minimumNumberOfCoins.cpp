//Using Recursion
/*
#include <bits/stdc++.h> 
int solveRecursion(vector<int> &num, int x) //we get TLE
{
    //base case
    if(x==0) return 0;
    if(x<0) return INT_MAX;

    int mini=INT_MAX;

    for(int i=0;i<num.size();i++)
    {
        int ans=solveRecursion(num, x-num[i]);

        if(ans!=INT_MAX) mini=min(mini,1+ans);
    }

    return mini;
}
int minimumElements(vector<int> &num, int x)
{
  int result=solveRecursion(num, x);

  if(result==INT_MAX) return -1;
  return result;
}*/
/********************************************* */
//Using rec+memo
/*
#include <bits/stdc++.h> 
int solveRecMemo(vector<int>&num,int x,vector<int> &dp)
{
  //base case
  if(x==0) return 0;
  if(x<=0) return INT_MAX;

  if(dp[x]!=-1) return dp[x];
  int mini=INT_MAX;

  for(int i=0;i<num.size();i++)
  {
    int ans=solveRecMemo(num, x-num[i], dp);
    if(ans!=INT_MAX) mini=min(mini,1+ans);
  }

  dp[x]=mini;

  return mini;
}
int minimumElements(vector<int> &num, int x)
{
  //creating dpArray of size x+1
  vector<int>dpArray(x+1,-1);
    int result=solveRecMemo(num,x,dpArray);

    if(result==INT_MAX) return -1;
    return result; 
}*/
/********************************************************** */
//Tbulation
/*#include <bits/stdc++.h> 
int solveTabulation(vector<int>&num,int x)
{
  vector<int>dp(x+1 , INT_MAX);

  dp[0]=0; //from base case

  for(int i=1;i<=x;i++)
  {
    for(int j=0;j<num.size();j++)
    {
      if(i-num[j]>=0 && dp[i-num[j]]!=INT_MAX)
      {
        dp[i]=min(dp[i],1+dp[i-num[j]]);
      }
    }
  }

  if(dp[x]==INT_MAX) return -1;
  return dp[x];
}
int minimumElements(vector<int> &num, int x)
{
    return solveTabulation(num,x);
}*/
/******************************************************************* */
