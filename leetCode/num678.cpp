class Solution {
public:
    bool checkValidString(string s) {
        int n = s.size();
        int cmax = 0;
        int cmin = 0;
        for(int i=0; i<n; i++){
            if(s[i] == '('){
                cmax++;
                cmin++;
            }else if(s[i]==')'){
                cmax--;
                cmin--;
            }else if(s[i]=='*'){
                cmax++;
                cmin--;
            }
            if(cmax<0)return 0;
            if(cmin<0) cmin =0;
        }
        return cmin==0;
    }
};
