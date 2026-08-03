class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        float min_avg = INT_MAX;
        int low = 0;
        int high = nums.size()-1;
        while(low<high){
            float avg = (float)(nums[low]+nums[high])/2;
            min_avg = min(min_avg,avg);
            high--;
            low++;
        }
        return min_avg;
    }
};
