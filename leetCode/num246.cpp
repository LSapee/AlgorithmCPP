class Solution {
public:
    bool isStrobogrammatic(string num) {
        string s = "";
        for(int i=0; i<num.size(); i++){
            if(num[i]=='1') s='1'+s;
            else if(num[i]=='0') s= '0'+s;
            else if(num[i]=='6') s= '9'+s;
            else if(num[i]=='8')s = '8'+s;
            else if(num[i]=='9') s= '6'+s;
            else return false;
        }
        for(int i=0; i<num.size(); i++){
            if(s[i]!=num[i]) return false;
        }
        return true;

    }
};