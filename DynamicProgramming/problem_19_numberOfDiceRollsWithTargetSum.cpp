//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
  long long solve(int dice,int faces,int target)
  {
      //base case
      if(target<0) return 0;
      
      if(dice==0 && target!=0) return 0;
      
      if(target==0 && dice!=0) return 0;
      
      if(dice==0 && target==0) return 1;
      
      long long ans=0;
      
      for(int i=1;i<=faces;i++)
      {
          ans=ans+solve(dice-1,faces,target-i);
      }
      
      return ans;
  }
  long long solveRecMem(int dice,int face,int target,vector<vector<long long>>&dp)
  {
      //base case
      if(target<0) return 0;
      
      if(dice==0 && target!=0) return 0;
      
      if(target==0 && dice!=0) return 0;
      
      if(dice==0 && target==0) return 1;
      
      if(dp[dice][target]!=-1) return dp[dice][target];
      
      long long ans=0;
      
      for(int i=1;i<=face;i++)
      {
          ans=ans+solveRecMem(dice-1,face,target-i,dp);
      }
      
      return dp[dice][target]=ans;
  }
  
  long long solveTab(int d,int f,int t)
  {
      vector<vector<long long>>dp(d+1,vector<long long>(t+1,0));
      
      //analyzing base case
      dp[0][0]=1;
      
      for(int dice=1;dice<=d;dice++)
      {
          for(int target=1;target<=t;target++)
          {
              long long ans=0;
      
               for(int i=1;i<=f;i++)
               {
                   if(target-i>=0)
                    ans=ans+dp[dice-1][target-i];
              }
              dp[dice][target]=ans;
          }
      }
      return dp[d][t];
  }
  long long spaceOptimization(int d, int f, int t) {
        vector<long long> prev(t + 1, 0);
        vector<long long> curr(t + 1, 0);
        
        prev[0] = 1;
        
        for (int dice = 1; dice <= d; dice++) {
            for (int target = 1; target <= t; target++) {
                long long ans = 0;
                for (int i = 1; i <= f; i++) {
                    if (target - i >= 0)
                        ans = ans + prev[target - i];
                }
                curr[target] = ans;
            }
            prev = curr;
        }
        return prev[t];
    }
   
    long long noOfWays(int m, int n, int x) {
        /*Recursion
        return solve(n,m,x);*/
        
        /*Recursion + Memorization
        vector<vector<long long>>dp(n+1,vector<long long>(x+1,-1));
        return solveRecMem(n,m,x,dp);*/
        
        /*Tabulation
        return solveTab(n,m,x);
        */
        
        return spaceOptimization(n,m,x);
    }
};

//{ Driver Code Starts.
int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);
    while (t--) {
        string ts;
        getline(cin, ts);
        stringstream ss(ts);
        int number;
        int f = 0;
        int m, n, x;
        while (ss >> number) {
            if (f == 0)
                m = number;
            else if (f == 1)
                n = number;
            else
                x = number;
            f++;
        }

        // cin>>M>>N>>X;

        Solution ob;
        cout << ob.noOfWays(m, n, x) << endl;
    }
    return 0;
}
// } Driver Code Ends