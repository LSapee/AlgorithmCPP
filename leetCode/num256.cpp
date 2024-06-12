class Solution {
public:
    int minCost(vector<vector<int>>& costs) {
        vector<vector<int>> arr(costs.size(),vector<int> (3,0));
        arr[0][0]=costs[0][0];
        arr[0][1]=costs[0][1];
        arr[0][2]=costs[0][2];
        for(int i=1; i<costs.size(); i++){
            arr[i][0] = min(arr[i-1][1]+costs[i][0],arr[i-1][2]+costs[i][0]);
            arr[i][1] = min(arr[i-1][0]+costs[i][1],arr[i-1][2]+costs[i][1]);
            arr[i][2] = min(arr[i-1][0]+costs[i][2],arr[i-1][1]+costs[i][2]);
        }
        int ans =INT_MAX;
        for(int i=0; i<3; i++)ans =min(ans,arr[costs.size()-1][i]);
        return ans;
    }
};