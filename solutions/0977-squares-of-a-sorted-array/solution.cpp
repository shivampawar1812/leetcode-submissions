class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> a;
        vector<int> b;
        for(int i = 0;i<nums.size();i++){
            if(nums[i]<0){
                a.push_back(nums[i]);
            }else{
                b.push_back(nums[i]);
            }
        }
        vector<int> square_1(a.size());
        for (int i = 0; i < a.size(); i++) {
            square_1[i] = a[i] * a[i];
        }
        reverse(square_1.begin(),square_1.end());
        vector<int> square_2(b.size());
        for (int i = 0; i < b.size(); i++) {
            square_2[i] = b[i] * b[i];
        }   

        if(a.size()==0){
            return square_2;
        }
        else if(b.size()==0){
            return square_1;
        }
        else{
            int i =0;
            int j=0;
            vector<int> result;
            while(i<a.size() && j<b.size()){
                if(square_1[i]<=square_2[j]){
                result.push_back(square_1[i]);
                i++;
                }
                else if(square_1[i]>square_2[j]){
                    result.push_back(square_2[j]);
                    j++;
                }
            }
            while(i<a.size()){
                result.push_back(square_1[i]);
                i++;
            }
            while(j<b.size()){
                result.push_back(square_2[j]);
                j++;
            }
            return result;                 
        }
        return{};
    }
};
