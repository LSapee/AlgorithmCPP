class Solution {
public:
    vector<vector<int>> largeGroupPositions(string s) {
        int n = s.size();
        int cnt =1;
        vector<vector<int>> ans;
        for(int i=1; i<n; i++){
            if(s[i-1]==s[i])cnt++;
            else{
                if(cnt>=3)ans.push_back({i-cnt,i-1});
                cnt=1;
            }
        }
        if(cnt>=3)ans.push_back({n-cnt,n-1});
        return ans;
    }
};