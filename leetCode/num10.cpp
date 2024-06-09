class Solution {
public:
    bool isMatch(string s, string p) {
        regex re(p);
        return regex_match(s,re);
    }
};