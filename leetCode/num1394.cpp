class Solution {
public:
    int numsCnt[501];
    int findLucky(vector<int>& arr) {
        int ans =-1;
        for(int i=0; i<arr.size(); i++)numsCnt[arr[i]]++;
        for(int i=1; i<501; i++) if(numsCnt[i]==i)ans = i;
        return ans;
    }
};