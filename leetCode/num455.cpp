class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        int st =0;
        int m = s.size();
        int ans =0;
        int n= g.size();
        if(m==0)return 0;
        for(int i=0; i<n; i++){
            while(st<m && g[i] > s[st])st++;
            if(st==m)break;
            if(g[i]<=s[st]){
                ans++;
                st++;
            }
        }
        return ans;
    }
};