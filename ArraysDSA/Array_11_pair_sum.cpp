/*
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> storing;
        for(int i=0;i<nums.size();i++)
        {
            storing.push_back(nums[i]);
        }
        sort(nums.begin() , nums.end());

        vector<int> ans;

        int start=0;
        int end=nums.size()-1;

        while(start<end)
        {
            if(nums[start]+nums[end] > target) end--;

            if(nums[start] + nums[end] < target) start++;

            if(nums[start] + nums[end] == target )
            {
                ans.push_back(start);
                ans.push_back(end);
                start++;
                end--;
            }

            
        }

        vector<int>original;

        for(int i=0;i<ans.size();i++)
        {
            for(int j=0;j<storing.size();j++)
            {
                if(ans[i]==storing[j]) original.push_back(j);
            }
        }

        return original;
    }
};
*/


//un potimized approach
/*
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        for(int i=0;i<nums.size();i++)
        {
            for(int j=i+1;j<nums.size();j++)
            {
                if(i==j) continue;

                if(nums[i]+nums[j]==target)
                {
                    ans.push_back(i);
                    ans.push_back(j);
                }
            }

        }

       
        return ans;
    }
};*/
