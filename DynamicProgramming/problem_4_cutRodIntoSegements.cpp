//Using Recursion
/*#include <bits/stdc++.h>
int solveRec(int n, int x, int y, int z) {
  if (n == 0)
    return 0;

  if (n < 0)
    return INT_MIN;

  int a = solveRec(n - x, x, y, z) + 1;
  int b = solveRec(n - y, x, y, z) + 1;
  int c = solveRec(n - z, x, y, z) + 1;

  int ans = max(a, max(b, c));
  return ans;
}
int cutSegments(int n, int x, int y, int z) {
  int ans = solveRec(n, x, y, z);
  if (ans < 0)
    return 0;
  return ans;
}**************************************/
//Using rec+mem
/*#include<bits/stdc++.h>
int solveRecMem(int n,int x,int y,int z,vector<int> &dp)
{
	if(n==0) return 0;

	if(n<0) return INT_MIN;

	if(dp[n]!=-1) return dp[n];

	int a=solveRecMem(n-x, x, y, z, dp)+1;
	int b=solveRecMem(n-y, x, y, z, dp)+1;
	int c=solveRecMem(n-z, x, y, z, dp)+1;

	dp[n]=max(a,max(b,c));
	return dp[n];


}
int cutSegments(int n, int x, int y, int z) {
	vector<int>dpArray(n+1,-1);
	int ans=solveRecMem(n,x,y,z,dpArray);
	if(ans<0) return 0;
	return ans;
}*******************************************/
//Using Tabulation
/*#include<bits/stdc++.h>
int Tabulation(int n,int x,int y,int z)
{
	vector<int> dp(n+1 ,INT_MIN);

	dp[0]=0;

	for(int i=1;i<=n;i++)
	{
		if(i-x >=0) dp[i]=max(dp[i],dp[i-x]+1);
		if(i-y >=0) dp[i]=max(dp[i],dp[i-y]+1);
		if(i-z >=0) dp[i]=max(dp[i],dp[i-z]+1);
	}

	if(dp[n]<0) return 0;
	return dp[n];
}
int cutSegments(int n, int x, int y, int z) {
	return Tabulation(n, x, y, z);
}********************************** */
//