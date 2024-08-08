#include<bits/stdc++.h>
using namespace std;
int solveRec(int n, vector<int> &days, vector<int> &cost,int index)
{
    //base case
    if(index >=n){
        return 0;
    }

    //1day pass
    int option1=cost[0]+solveRec(n, days, cost, index+1);

    //7 days option
    int i;

    for(i=index;i<n && days[i]<days[index]+7;i++); //incrementing the index upto 7 days

    int option2=cost[1]+solveRec(n, days, cost, i);

    //30 days option
    for(i=index;i<n && days[i]<days[index]+30;i++);

    int option3=cost[2]+solveRec(n, days, cost, i);


    return min(option1, min(option2,option3));

}

int solveRecMem(int n, vector<int> &days, vector<int> &cost,int index,vector<int> &dp)
{
    //base case
    if (index >= n) {
        return 0;
    }

    if(dp[index]!=-1) return dp[index];

    //option 1 day
    int option1=cost[0]+solveRecMem(n,days,cost,index+1,dp);

    //7 days option
    int i;
    for(i=index;i<n && days[i]<days[index]+7;i++);

    int option2=cost[1]+solveRecMem(n, days, cost, i, dp);

    //30 days option
    for(i=index;i<n && days[i]<days[index]+30;i++);

    int option3=cost[2]+solveRecMem(n, days, cost, i, dp);


    dp[index]=min(option1, min(option2,option3));
    return dp[index];
}

int solveTab(int n, vector<int> &days, vector<int> &cost )
{
    vector<int>dp(n+1 , INT_MAX);
    dp[n]=0;

    for(int k=n-1;k>=0;k--)
    {
        //option 1 day
    int option1=cost[0]+dp[k+1];

    //7 days option
    int i;
    for(i=k;i<n && days[i]<days[k]+7;i++);

    int option2=cost[1]+dp[i];

    //30 days option
    for(i=k;i<n && days[i]<days[k]+30;i++);

    int option3=cost[2]+dp[i];


    dp[k]=min(option1, min(option2,option3));
    }
  return dp[0];
}
int minimumCoins(int n, vector<int> days, vector<int> cost)
{
    /*Recursion
    return solveRec(n,days,cost,0); //here 0=index of starting
    */
    

    /*Memoization
    vector<int>dp(n+1 ,-1);
     return solveRecMem(n,days,cost,0,dp); //here 0=index of starting
     */

     /*Tabulation 
      return solveTab(n, days, cost);
    */


}