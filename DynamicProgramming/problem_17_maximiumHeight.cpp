// class Solution {
// public:
//     int maxHeight(vector<vector<int>>& cuboids) {
//         int n = cuboids.size();

//         // Step 1: Sort dimensions of each cuboid
//         for (auto &a : cuboids) {
//             sort(a.begin(), a.end());
//         }

//         // Step 2: Sort the cuboids list
//         sort(cuboids.begin(), cuboids.end(), [](const vector<int>& a, const vector<int>& b) {
//             return a[0] < b[0] || (a[0] == b[0] && (a[1] < b[1] || (a[1] == b[1] && a[2] < b[2])));
//         });

//         // Step 3: Dynamic Programming to find the maximum stack height
//         vector<int> dp(n, 0);

//         int maxHeight = 0;

//         for (int i = 0; i < n; i++) {
//             dp[i] = cuboids[i][2];  // Start with the height of the current cuboid
//             for (int j = 0; j < i; j++) {
//                 if (cuboids[j][0] <= cuboids[i][0] && cuboids[j][1] <= cuboids[i][1] && cuboids[j][2] <= cuboids[i][2]) {
//                     dp[i] = max(dp[i], dp[j] + cuboids[i][2]);
//                 }
//             }
//             maxHeight = max(maxHeight, dp[i]);
//         }

//         return maxHeight;
//     }
// };
