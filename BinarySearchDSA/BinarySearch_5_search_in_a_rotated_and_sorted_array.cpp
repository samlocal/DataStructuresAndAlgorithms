/*
class Solution {
    private:
    int pivotIndex(vector<int> &arr )
    {
        int start=0;
        int end=arr.size()-1;

        while(start<end)
        {
            int mid=start+(end-start)/2;

            if(arr[mid]>=arr[0]) start=mid+1;
            else end=mid;
        }

        return start;
    }

    int binarySearch(vector<int> & nums , int start , int end, int target)
    {
        while(start<=end)
        {
            int mid = start+(end-start)/2;

            if(nums[mid]==target) return mid;
            else if(nums[mid]>target) end=mid-1;
            else if(nums[mid]<target) start=mid+1;
        }
        return -1;
    }
public:
    int search(vector<int>& nums, int target) {
        int pivot=pivotIndex(nums);

        if(nums[pivot]<=target && target<=nums[nums.size()-1]) return binarySearch(nums,pivot,nums.size()-1,target);
        return binarySearch(nums,0,pivot-1,target);
    }
};*/