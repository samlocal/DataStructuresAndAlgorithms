#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int solve(vector<int>& nums1, vector<int>& nums2, int index, bool swapped) {
        if (index == nums1.size())
            return 0;

        int ans = INT_MAX;

        int prev1 = nums1[index - 1];
        int prev2 = nums2[index - 1];

        if (swapped)
            swap(prev1, prev2);

        // No swap
        if (nums1[index] > prev1 && nums2[index] > prev2)
            ans = solve(nums1, nums2, index + 1, false);

        // Swap
        if (nums1[index] > prev2 && nums2[index] > prev1)
            ans = min(ans, 1 + solve(nums1, nums2, index + 1, true));

        return ans;
    }

    int solveRecMem(vector<int>& nums1, vector<int>& nums2, int index,
                    bool swapped, vector<vector<int>> dp) {
        if (index == nums1.size())
            return 0;

        int ans = INT_MAX;

        int prev1 = nums1[index - 1];
        int prev2 = nums2[index - 1];

        if (dp[index][swapped] != -1)
            return dp[index][swapped];

        if (swapped)
            swap(prev1, prev2);

        // No swap
        if (nums1[index] > prev1 && nums2[index] > prev2)
            ans = solveRecMem(nums1, nums2, index + 1, false, dp);

        // Swap
        if (nums1[index] > prev2 && nums2[index] > prev1)
            ans = min(ans, 1 + solveRecMem(nums1, nums2, index + 1, true, dp));

        return dp[index][swapped] = ans;
    }

    int solveTab(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        vector<vector<int>> dp(nums1.size() + 1, vector<int>(2, 0));

        for (int index = n - 1; index >= 1; index--) {
            for (int swapped = 1; swapped >= 0; swapped--) {

                int ans = INT_MAX;

                int prev1 = nums1[index - 1];
                int prev2 = nums2[index - 1];

                if (swapped)
                    swap(prev1, prev2);

                // No swap
                if (nums1[index] > prev1 && nums2[index] > prev2)
                    ans = dp[index + 1][0];

                // Swap
                if (nums1[index] > prev2 && nums2[index] > prev1)
                    ans = min(ans, 1 + dp[index + 1][1]);

                dp[index][swapped] = ans;
            }
        }

        return dp[1][0];
    }

    int spaceOptimization(vector<int>& nums1, vector<int>& nums2)
    {
        int n=nums1.size();

        int swap=0;
        int noswap=0;

        int currswap=0;
        int currnoswap=0;

        for (int index = n - 1; index >= 1; index--) {
            for (int swapped = 1; swapped >= 0; swapped--) {

                int ans = INT_MAX;

                int prev1 = nums1[index - 1];
                int prev2 = nums2[index - 1];

                if (swapped)
                    {
            int temp=prev2;
            prev2=prev1;
            prev1=temp;
           }

                // No swap
                if (nums1[index] > prev1 && nums2[index] > prev2)
                    ans = noswap;

                // Swap
                if (nums1[index] > prev2 && nums2[index] > prev1)
                    ans = min(ans, 1 + swap);

                if(swapped) currswap=ans;
                else currnoswap=ans;
            }
            swap=currswap;
            noswap=currnoswap;
        }
   return min(swap,noswap);
       
    }

    int minSwap(vector<int>& nums1, vector<int>& nums2) {
        nums1.insert(nums1.begin(), -1);
        nums2.insert(nums2.begin(), -1);
        // Start from index 1 since we added a dummy element at index 0
        // return solve(nums1, nums2, 1, false);

        // vector<vector<int>>dp(nums1.size(),vector<int>(2,-1));
        // return solveRecMem(nums1,nums2,1,false,dp);

        // return solveTab(nums1,nums2);

        return spaceOptimization(nums1,nums2);
    }
};
