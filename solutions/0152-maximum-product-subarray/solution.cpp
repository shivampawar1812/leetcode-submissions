class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int ans = nums[0];
        int best_ending = nums[0];
        int min_ending = nums[0];
        for(int i =1;i<nums.size();i++){
            int v1 = nums[i];
            int v2 = min_ending*nums[i];
            int v3 = best_ending*nums[i];
            min_ending = min(min(v2,v3),v1);
            best_ending = max(max(v2,v3),v1);
            ans =max(ans, max(min_ending,best_ending));
            }
        return ans;
    }
};
