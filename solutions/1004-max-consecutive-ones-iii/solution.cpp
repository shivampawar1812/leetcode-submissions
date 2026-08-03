class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int res = k;
        int low = 0;
        unordered_map<int,int>freq;
        for(int high= 0;high<nums.size();high++){
            freq[nums[high]]++;
            while(freq[0] >k){
                freq[nums[low]]--;
                low++;
            }
            int len = high - low +1;
            res = max(res,len);
        }
        return res;
    }
};
