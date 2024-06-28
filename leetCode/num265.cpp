class Solution {
public:
    int minCostII(vector<vector<int>>& costs) {
        int n = costs.size();
        int k = costs[0].size();
        vector<vector<int>> arr(n,vector<int> (k,INT_MAX));
        for(int i=0; i<k; i++) arr[0][i] = costs[0][i];
        for(int i=1; i<n; i++){
            for(int j=0; j<k; j++){
                for(int f=0; f<k; f++){
                    if(f==j)continue;
                    arr[i][j] = min(arr[i][j],arr[i-1][f]+costs[i][j]);
                }
            }
        }
        int ans =INT_MAX;
        for(int i=0; i<k; i++)ans =min(ans,arr[n-1][i]);
        return ans;
    }
};