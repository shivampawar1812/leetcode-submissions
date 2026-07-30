class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int i = 0;
        int n;
        vector<vector<int>> ans;
        n = nums.size();
        sort(nums.begin(),nums.end()); 
        while(i<n-2){
            int left = i+1;
            int right = n-1;
            int target = -nums[i];
            while(left<right){
                int sum = nums[left]+nums[right];
                if(sum == target){
                    ans.push_back({nums[i], nums[left], nums[right]});
                    left++;     
                    right--;
                    while(left < right && nums[left] == nums[left-1]){
                        left++;
                    }
                    while (left < right && nums[right] == nums[right+1]){
                        right--;
                    }
                }
                else if(sum < target){
                    left++ ;
                }
                else{
                    right-- ;
                }
            }
            i++;
            while(i < n-2 && nums[i] == nums[i-1]){
                i++;
            }
        }
        return ans;
    }
};
