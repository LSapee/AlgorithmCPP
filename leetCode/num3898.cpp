class Solution {
public:
    vector<int> findDegrees(vector<vector<int>>& matrix) {
        int n = matrix.size();
        vector<int> ans(n,-1);
        for(int i=0; i<n; i++) ans[i] = accumulate(matrix[i].begin(),matrix[i].end(),0);
        return ans;
    }
};