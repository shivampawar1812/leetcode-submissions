class Solution {
public:
    int maximumSum(vector<int>& arr) {
        int nodelete = arr[0];
        int onedelete = 0;
        int res = arr[0];
        for(int i=1;i<arr.size();i++){
            int prevno = nodelete;
            int prevone = onedelete;
            nodelete = max(nodelete+arr[i],arr[i]);
            onedelete = max(prevone+arr[i],prevno);
            res = max(max(res,arr[i]),max(nodelete,onedelete));
        }
        return res;
    }
};
