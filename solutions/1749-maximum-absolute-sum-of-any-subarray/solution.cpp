class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int min_sum = nums[0];
        int max_sum = nums[0];
        int res = abs(nums[0]);
        for(int i = 1;i<nums.size();i++){
            min_sum = min(min_sum + nums[i],nums[i]);
            max_sum = max(max_sum + nums[i],nums[i]);
            int absolute_min = abs(min_sum);
            int absolute_max = abs(max_sum);
            res = max(res,max(absolute_max,absolute_min));
        }
        return res;
    }
};
