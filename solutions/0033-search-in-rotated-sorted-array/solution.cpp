class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int i = 0;
        int j = n-1;
        while(i<=j){
            if(nums[i] == target){
                return i;
            }
            else if(nums[j]==target){
                return j;
            }
            int mid = (i+j)/2;
            if(nums[mid] == target){
                return mid;
            }
            else if(nums[mid]>nums[i]){
                if(nums[i]<target && nums[mid]>target){
                    j = mid-1;
                }
                else{
                    i = mid+1;
                }
            }
            else{
                if(nums[mid]<target && nums[j]>target){
                    i = mid+1;
                }
                else{
                    j = mid-1;
                }
            }
        }
        return -1;
    }
};
