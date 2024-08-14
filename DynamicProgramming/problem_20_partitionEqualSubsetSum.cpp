//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
bool solve(int index,int arr[],int n,int target)
{
    
    if(index>=n) return 0;
    
    if(target<0) return 0;
    
    if(target==0) return 1;
    
    bool include=solve(index+1,arr,n,target-arr[index]);
    
    bool exclude=solve(index+1,arr,n,target-0);
    
    return include || exclude;
    
}

bool solveRecMem(int index,int arr[],int n,int target,vector<vector<int>>&dp)
{
    if(index>=n) return 0;
    
    if(target<0) return 0;
    
    if(target==0) return 1;
    
    if(dp[index][target]!=-1) return dp[index][target];
    
    bool include=solveRecMem(index+1,arr,n,target-arr[index],dp);
    bool exclude=solve(index+1,arr,n,target-0);
    
    return dp[index][target]=include or exclude;
    
}

int solveTab(int n,int arr[],int t)
{
    vector<vector<int>>dp(n+1,vector<int>(t+1,0));
    
    for(int i=0;i<=n;i++) dp[i][0]=1;
    
    for(int index=n-1;index>=0;index--)
    {
        for(int target=0;target<=t;target++)
        {
            bool include=0;
            if(target-arr[index]>=0)
             include=dp[index+1][target-arr[index]];
            bool exclude=dp[index+1][target-0];
    
            dp[index][target]=include or exclude;
        }
    }
    return dp[0][t];
}

int spaceOptimization(int n,int arr[],int totalSum)
{
   
     vector<int>curr(totalSum/2 +1,0);
      vector<int>next(totalSum/2 +1,0);
     
     curr[0]=1;
     next[0]=1;
     
     for(int index=n-1;index>=0;index--)
    {
        for(int target=0;target<=totalSum/2;target++)
        {
            bool include=0;
            if(target-arr[index]>=0)
             include=next[target-arr[index]];
            bool exclude=next[target-0];
    
           curr[target]=include or exclude;
        }
        next=curr;
    }
    return next[totalSum/2];
}

    int equalPartition(int N, int arr[])
    {
        
        
        /*Recursion
        int totalSum=0;
        for(int i=0;i<N;i++) totalSum+=arr[i];
        if(totalSum&1) return 0;
        int target=totalSum/2;
        return solve(0,arr,N,target);
        */
        
        /*Recursion + Memorizarion
        int totalSum=0;
        for(int i=0;i<N;i++) totalSum+=arr[i];
        if(totalSum&1) return 0;
        int target=totalSum/2;
        vector<vector<int>>dp(N,vector<int>(target+1,-1));
        return solveRecMem(0,arr,N,target,dp);
        */
        
        /*Tabulation
        int totalSum=0;
        for(int i=0;i<N;i++) totalSum+=arr[i];
        if(totalSum&1) return 0;
        int target=totalSum/2;
        return solveTab(N,arr,target);
        */
        
        
        int totalSum=0;
        for(int i=0;i<N;i++) totalSum+=arr[i];
        if(totalSum&1) return 0;
        int target=totalSum/2;
        return spaceOptimization(N,arr,totalSum);
        
        
        
        
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        int arr[N];
        for(int i = 0;i < N;i++)
            cin>>arr[i];
        
        Solution ob;
        if(ob.equalPartition(N, arr))
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}
// } Driver Code Ends