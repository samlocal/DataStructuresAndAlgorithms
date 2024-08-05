//Using recursion
/*#define MOD 1000000007

long long int countDerangements(int n) {
    if (n == 1) return 0;
    if (n == 2) return 1;

    long long int ans = (((n - 1) % MOD) * ((countDerangements(n - 1) % MOD) + (countDerangements(n - 2) % MOD)) % MOD);
    return ans;
}
***************************************/
//rec+mem
/*#include <bits/stdc++.h>
#define MOD 1000000007
using namespace std;

long long int solveRecMem(int n, vector<long long int>& dp) {
    if (n == 1) return 0;
    if (n == 2) return 1;

    if (dp[n] != -1) return dp[n];

    dp[n] = (((n - 1) % MOD) * ((solveRecMem(n - 1, dp) % MOD) + (solveRecMem(n - 2, dp) % MOD)) % MOD) % MOD;
    return dp[n];
}

long long int countDerangements(int n) {
    vector<long long int> dp(n + 1, -1);
    return solveRecMem(n, dp);
}
**********************************/
