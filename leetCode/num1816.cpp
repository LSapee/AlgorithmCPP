class Solution {
public:
    string truncateSentence(string s, int k) {
        string ans = "";
        int n = s.size();
        int cnt =0;
        for(int i=0; i<n; i++){
            if(s[i]==' ')cnt++;
            if(cnt==k)break;
            ans+=s[i];
        }
        return ans;
    }
};