class Solution {
public:
    string makeSmallestPalindrome(string s) {
        int n = s.size();
        int st = 0;
        int ed =n-1;
        while(st<ed){
            if(s[st]!= s[ed]){
                char alpha = (s[st]<s[ed]) ? s[st] :s[ed];
                s[st] = alpha;
                s[ed] = alpha;
            }
            st++;
            ed--;
        }
        return s;
    }
};