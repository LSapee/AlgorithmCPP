class Solution {
public:
    bool checkString(string s) {
        bool ok = false;
        int n =s.size();
        for(int i=0; i<n; i++){
            if(ok) if(s[i]=='a')return false;
            if(s[i]=='b')ok=true;
        }
        return true;
    }
};