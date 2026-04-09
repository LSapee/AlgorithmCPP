class Solution {
public:
    string reversePrefix(string s, int k) {
        int st =0;
        int ed = k-1;
        while(st<ed){
            swap(s[st],s[ed]);
            st++;
            ed--;
        }
        return s;
    }
};