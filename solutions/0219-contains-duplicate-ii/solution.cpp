class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int low = 0;
        unordered_map<int,int>freq;
        for(int high=0;high<nums.size();high++){
            freq[nums[high]]++;
            while(low<=high && (high-low)>k){
                freq[nums[low]]--;
                if(freq[nums[low]] == 0){
                    freq.erase(nums[low]);
                }
                low++;
            }
            if(freq[nums[high]]>1){
                return true;
            }
        }
        return false;
    }
};
