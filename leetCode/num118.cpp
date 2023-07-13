class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        ios::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        vector<vector<int>> ans;
        for(int i=1; i<=numRows; i++){
            vector<int> a(i,1);
            ans.push_back(a);
        }
        if(numRows>2){
            for(int i=2; i<numRows; i++){
                for(int j=1; j<ans[i].size()-1; j++){
                    ans[i][j] = ans[i-1][j-1]+ans[i-1][j];
                }
            }
        }
        return ans;
    }
};