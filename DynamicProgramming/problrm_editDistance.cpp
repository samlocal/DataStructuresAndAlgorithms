// #include <string>
// #include <algorithm>
// using namespace std;

// class Solution {
// public:
//     int solve(string a, string b, int i, int j) {
//         // Base cases
//         if (i == a.length()) return b.length() - j; // Characters left in b to be inserted
//         if (j == b.length()) return a.length() - i; // Characters left in a to be deleted
        
//         int ans;
//         if (a[i] == b[j]) {
//             ans = solve(a, b, i + 1, j + 1); // Characters match, move to next characters in both strings
//         } else {
//             // Insert
//             int insertAns = 1 + solve(a, b, i, j + 1);
//             // Delete
//             int deleteAns = 1 + solve(a, b, i + 1, j);
//             // Replace
//             int replaceAns = 1 + solve(a, b, i + 1, j + 1);

//             ans = min(insertAns, min(deleteAns, replaceAns));
//         }
//         return ans;
//     }

//     int solveRecMem(string a,string b,int i,int j,vector<vector<int>> &dp)
//     {
//         // Base cases
//         if (i == a.length()) return b.length() - j; // Characters left in b to be inserted
//         if (j == b.length()) return a.length() - i; // Characters left in a to be deleted

//         if(dp[i][j]!=-1) return dp[i][j];
        
//         int ans=0;
//         if (a[i] == b[j]) {
//             ans = solve(a, b, i + 1, j + 1); // Characters match, move to next characters in both strings
//         } else {
//             // Insert
//             int insertAns = 1 + solveRecMem(a, b, i, j + 1,dp);
//             // Delete
//             int deleteAns = 1 + solveRecMem(a, b, i + 1, j,dp);
//             // Replace
//             int replaceAns = 1 + solveRecMem(a, b, i + 1, j + 1,dp);

//             ans = min(insertAns, min(deleteAns, replaceAns));
//         }
//           return dp[i][j]=ans;

//     }

//     int minDistance(string word1, string word2) {
//         /*Recursion
//         return solve(word1, word2, 0, 0);
//         */

//         vector<vector<int>> dp(word1.length() + 1, vector<int>(word2.length() + 1, -1));
//         return solveRecMem(word1,word2,0,0,dp);

//     }
// };
