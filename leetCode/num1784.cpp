class Solution {
public:
    bool checkOnesSegment(string s) {
        int cnt =0;
        int n =s.size();
        for(int i=0; i<n; i++){
            if(cnt==-1 && s[i]=='1')return false;
            if(s[i]=='1')cnt++;
            else if(cnt>0 && s[i]=='0')cnt= -1;
        }
        return true;
    }
};