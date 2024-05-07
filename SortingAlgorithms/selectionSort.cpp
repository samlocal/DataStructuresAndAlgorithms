/*
class Solution {
    private:
    void selectionSort(vector<int> &arr)
    {
        for(int i=0;i<arr.size()-1;i++)
        {
            int minIndex=i;
            for(int j=i+1;j<arr.size();j++)
            {
                if(arr[j]<arr[minIndex])
                {
                    minIndex=j;
                }
            }

            swap(arr[i] , arr[minIndex]);
        }
    }
public:
    vector<int> sortArray(vector<int>& nums) {
        
        selectionSort(nums);
        return nums;
    }
};*/