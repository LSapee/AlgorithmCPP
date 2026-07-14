class Solution {
public:
    vector<vector<int>> sortTheStudents(vector<vector<int>>& score, int k) {
        int n =score.size();
        int m = score[0].size();
        vector<pair<int,int>> arr;
        for(int i=0; i<n; i++) arr.push_back({score[i][k],i});
        sort(arr.rbegin(),arr.rend());
        vector<vector<int>> ans;
        for(int i=0; i<n; i++){
            vector<int> temp;
            int t = arr[i].second;
            for(int j=0; j<m; j++){
                temp.push_back(score[t][j]);
            }
            ans.push_back(temp);
        }
        return ans;
    }
};