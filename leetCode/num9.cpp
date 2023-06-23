class Solution {
public:
    bool isPalindrome(int x) {
        ios::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        string s = to_string(x);
        string ss = s;
        reverse(s.begin(),s.end());
        for(int i=0; i<s.size(); i++){
            if(ss[i]!=s[i]) return false;
        }
        return true;
    }
};