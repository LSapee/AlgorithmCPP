class Solution {
public:
    vector<string> divideString(string s, int k, char fill) {
        vector<string> ans;
        int n = s.size();
        int st = 0;
        string ss ="";
        while(st<n){
            ss = s.substr(st,k);
            if(ss.size()<k)break;
            ans.push_back(ss);
            st+=k;
        }
        if(ss.size()==k)return ans;
        while(ss.size()>0 && ss.size()<k)ss+=fill;
        ans.push_back(ss);
        return ans;
    }
};