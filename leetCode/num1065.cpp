class Solution {
public:
    vector<vector<int>> indexPairs(string text, vector<string>& words) {
        unordered_set<string> st;
        vector<vector<int>> ans;
        int n = words.size();
        for(int i=0; i<n; i++) st.insert(words[i]);
        int m= text.size();
        for(int i=0; i<m; i++){
            for(int j=i; j<m; j++){
                if(st.count(text.substr(i,j-i+1)))ans.push_back({i,j});
            }
        }
        return ans;
    }
};