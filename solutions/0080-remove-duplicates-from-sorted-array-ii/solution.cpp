class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i =0;
        int j = 0;
        int k =0;
        if(nums.size() == 0){
            return {};
        }
        while(i<nums.size() && j<nums.size()){
            while(j<nums.size() && nums[i] == nums[j] &&  j-i<2){
                nums[k] = nums[j];
                k++;
                j++;
            }
            while( j<nums.size() && nums[i] == nums[j]){
                j++;
            }
            if(j<nums.size()){
                i = j;
            }
        }
        return k;
    }
};
