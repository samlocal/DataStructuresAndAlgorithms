/*class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        int i=0;
        int j=0;
        set<int> ans;

        sort(nums1.begin() , nums1.end());
        sort(nums2.begin() , nums2.end());



        while(i<nums1.size() && j<nums2.size())
        {
            if(nums1[i] < nums2[j]) i++;
            else if (nums1[i] == nums2[j]) {
                ans.insert(nums1[i]);
                i++;
                j++;
            }
            else if(nums1[i]>nums2[j]) j++;
        }

         vector<int>result;
       for(auto num : ans) result.push_back(num);

        return result;

        
    }
};


//unoptimized approach
/*
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int> ans;
        for(int i=0;i<nums1.size();i++)
        {
            for(int j=0;j<nums2.size();j++)
            {
                if(nums1[i]==nums2[j])
                {
                    ans.insert(nums2[j]);
                    nums2[j]=INT_MAX;
                    break;
                }
            }
        }
        
        vector<int>result;
       for(auto num : ans) result.push_back(num);

        return result;
    }
};*/
