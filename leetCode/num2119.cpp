class Solution {
public:
    bool isSameAfterReversals(int num) {
        string s = to_string(num);
        reverse(s.begin(),s.end());
        string ss = to_string(num);
        int k = stoi(s);
        int kk = stoi(ss);
        string s1 = to_string(k);
        string ss1 = to_string(kk);
        if(s==s1 && ss==ss1)return true;
        return false;
    }
};