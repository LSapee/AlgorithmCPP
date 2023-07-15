class Solution {
public:
    vector<int> getRow(int rowIndex) {
        ios::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        vector<vector<int>> ans;
        for(int i=0; i<rowIndex+1; i++){
            vector<int> a(i+1,1);
            ans.push_back(a);
        }
        for(int i=2; i<ans.size(); i++){
            for(int j=1; j<ans[i].size()-1; j++){
                ans[i][j] = ans[i-1][j-1]+ans[i-1][j];
            }
        }
        return ans[rowIndex];
    }
};