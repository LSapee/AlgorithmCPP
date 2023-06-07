class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        bool ans = false;
        string ss = "";
        for(int i=0; i<s.size()/2; i++){
            ss += s[i];
            string p ="";
            while(p.size()<s.size()){
                p+=ss;
            }
            if(s.compare(p) == 0){
                ans = true;
                break;
            }
        }
        return ans;
    }
};