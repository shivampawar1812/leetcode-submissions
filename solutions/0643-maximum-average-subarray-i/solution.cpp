class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int low = 0;
        int sum = 0;
        int res = -1e9;
        for(int high = 0;high<nums.size();high++){
            sum = sum + nums[high];
            while(high-low +1 >k){
                sum = sum - nums[low];
                low++;
            }
            if(high - low +1 == k){
                res = max(res,sum);
            }
        }
        return (double)res/k;
    }
};
