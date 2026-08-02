class Solution {
public:
    int removePalindromeSub(string s) {
        int n =s.size();
        int ed= n-1;
        int st =0;
        bool a = false;
        while(st<ed){
            if(s[st] != s[ed]){
                a =true;
                break;
            }
            st++;
            ed--;
        }
        return a ? 2:1;
    }
};