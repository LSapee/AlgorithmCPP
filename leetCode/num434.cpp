class Solution {
public:
    int countSegments(string s) {
        int cnt =0;
        if(s.size()==0)return 0;
        for(int i=1; i<s.size(); i++)if(s[i]==' '&&s[i-1]!=' ')cnt++;
        if(s[s.size()-1]!=' ')cnt++;
        return cnt;
    }
};