class Solution {
public:
    bool hasAlternatingBits(int n) {
        string s = "";
        while(n>0){
            s= to_string(n%2)+s;
            n/=2;
        }
        int m = s.size();
        for(int i=1; i<m; i++){
            if(s[i-1]!=s[i])continue;
            else return false;
        }
        return true;
    }
};