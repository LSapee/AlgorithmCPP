class Solution {
public:
    int earliestTime(vector<vector<int>>& tasks) {
        int n = tasks.size();
        int ans =9999;
        for(int i=0; i<n; i++) ans = min(ans,tasks[i][0]+tasks[i][1]);
        return ans;
    }
};