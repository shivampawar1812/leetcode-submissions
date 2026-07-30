class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
         int i = 0;
         int ans;
         int diff;
         int n = nums.size();
         sort(nums.begin(),nums.end());
         int max_diff = 1e9;
         while(i<n-2){
            int left = i+1;
            int right = n-1;
            while(left<right){
                int sum = nums[i] + nums[left] + nums[right];
                diff = abs(sum - target);
                if(diff < max_diff){
                    max_diff = diff;
                    ans = sum;
                }
                if(sum == target){
                    return target;
                }
                else if(sum < target){
                    left++;
                }
                else{
                    right--;
                }
            }
            i++;
         }
    return ans;
    }
};
