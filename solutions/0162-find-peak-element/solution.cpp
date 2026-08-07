class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n = nums.size();
        if(n>1 && nums[0]>nums[1]){
            return 0;
        }
        else if(n>1 && nums[n-2]<nums[n-1]){
            return n-1;
        }
        int i = 0;
        int j = n-1;
        while(i<j){
            int mid = (i+j)/2;
            if(nums[mid]>nums[mid-1] && nums[mid]>nums[mid+1]){
                return mid;
            }
            else if(nums[mid-1]<nums[mid+1]){
                i = mid;
            }
            else if(nums[mid-1]>=nums[mid+1]){
                j = mid;
            }
        }
        return {};
    }
};
