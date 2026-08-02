class Solution {
public:
    int find_MAX(unordered_map<char, int>& f) {
        int mx = 0;
        for (int i = 0;i<f.size();i++){
            mx = max(mx, f[i]);
        }
        return mx;
    }
    int characterReplacement(string s, int k) {
        int low = 0;
        int res = 0;
        unordered_map<char,int>f;
        for(int high = 0; high<s.size(); high++){
            f[s[high]]++;
            int len = high - low + 1;
            int max_cnt = find_MAX(f); 
            int diff = len - max_cnt;
            while(diff > k){
                f[s[low]]--;
                low++;
                len = high - low +1;
                max_cnt = find_MAX(f);
                diff = len - max_cnt;
            }
            if(diff <= k){
                res = max(res , high - low + 1);
            }
        }
        return res;
    }
};
