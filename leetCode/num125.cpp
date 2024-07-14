class Solution {
public:
    bool isPalindrome(string s) {
        string ss = "";
        for(char a : s){
            if(a>=65 &&a<=90)ss+= a+32;
            if(a>=97 &&a<=122)ss+= a;
            if(a-'0'>=0&&a-'0'<=9)ss+=a;
        }
        int n = ss.size()-1;
        int min = ss.size()/2;
        for(int i=0,j=n; i<min; i++,j--)if(ss[i]!=ss[j])return false;
        return true;
    }
};