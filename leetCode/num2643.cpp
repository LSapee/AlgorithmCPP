class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0].size();
        vector<int> arr(n,0);
        vector<int> ans(2,0);
        for(int i=0; i<n; i++){
            int cnt =0;
            for(int j=0; j<m; j++){
                cnt+=mat[i][j];
            }
            if(ans[1]<cnt){
                ans[0] =i;
                ans[1] = cnt;
            }
        }
        return ans;
    }
};