// class Solution {
// public:
//     int singleNumber(vector<int>& nums) {
//         int ans=0;
//         for(int i=0;i<nums.size();i++)
//         {
//             ans=ans^nums[i];
//         }

//         return ans;
//     }
// };

//Another Approach
/*
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        //sorting the vector
        sort(nums.begin(), nums.end());

        for(int i=0;i<nums.size();i=i+2)
        {
            if(i==nums.size()-1) break;

            if(nums[i]!=nums[i+1]) return nums[i];
        }

        return nums[nums.size()-1];

    }
};
*/