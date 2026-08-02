class Solution {
public:
    bool check(unordered_map<char,int>& current, unordered_map<char,int>& needed){
        for (auto &it : needed) {
            if (current[it.first] < it.second)
                return false;
        }
        return true;
    }
    string minWindow(string s, string t) {
        unordered_map<char,int>needed;
        unordered_map<char,int>current;
        for(int i =0;i<t.size();i++){
            needed[t[i]]++;
        }
        int low = 0;
        int res = INT_MAX;
        int start = 0;
        for(int high =0;high <s.size();high++){
            current[s[high]]++;
            while(check(current,needed)){
                int len = high - low +1;
                if(res > len){
                    res = len;
                    start = low;
                }
                current[s[low]]--;
                low++; 
            }
        }
        if(res == INT_MAX){
            return "";
        }
        else{
            return s.substr(start,res);
        }
    }
};
