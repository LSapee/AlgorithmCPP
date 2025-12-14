class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        int n =s.size();
        vector<int> ans(n,INT_MAX);
        vector<int> cur;
        for(int i=0; i<n; i++) if(s[i]==c)cur.push_back(i);
        for(int i=0; i<n; i++){
            for(int j=0; j<cur.size(); j++){
                ans[i] = min(ans[i], abs(i-cur[j]));
            }
        }
        return ans;

    }
};