/*
class Solution {
    private:
    void powerSet(vector<int> nums , vector<int> output , int index , vector<vector<int>> &ans)
    {
        if(index >= nums.size()) {
            ans.push_back(output);
            return;
        }

        //exclusive  call
        powerSet(nums , output , index+1 , ans);

        //inclusive call
        int element = nums[index];
        output.push_back(element);
        powerSet(nums , output , index+1 , ans);
    }
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> output;
        int index=0;
        powerSet(nums , output , index , ans);
        return ans;
    }
};*/