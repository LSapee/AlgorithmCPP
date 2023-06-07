class Solution {
public:
    string toLowerCase(string s) {
        ios::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        for(int i=0; i<s.size();i++) if(s[i]>=65 &&s[i]<=90) s[i]+= 32;
        return s;
    }
};