class Solution {
public:
    string generateTheString(int n) {
        string ans =n%2 == 0 ? "" : "z";
        if(n%2!=0)n--;
        while(n>1){
            ans+="a";
            n--;
        }
        if(n>0)ans+="b";
        return ans;
    }
};