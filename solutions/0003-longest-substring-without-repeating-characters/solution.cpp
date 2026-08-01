class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int low = 0;
        int high = 0;
        int res = 0;
        unordered_map<int,int> freq;
        for(high = 0;high<s.size();high++){
            freq[s[high]]++;
            while(freq[s[high]]>1){
                freq[s[low]]--;
                low++;
            }
            if(freq[s[high]] <2){
                int len = high -low+1;
                res = max(res,len);
            }
        }
        return res;
    }
};
