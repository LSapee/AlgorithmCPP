class Solution {
public:
    bool isLong(string s, string ss){
        if(ss.size()>s.size())return true;
        return false;
    }

    bool isSame(string s, string ss){
        sort(ss.begin(),ss.end());
        for(int i=0; i<s.size(); i++){
            if(s[i]!=ss[i])return false;
        }
        return true;
    }

    bool reorderedPowerOf2(int n) {
        if(n==1)return n;
        string s= to_string(n);
        sort(s.begin(),s.end());
        int k =2;
        bool check = false;
        while(k<INT_MAX){
            string kk = to_string(k);
            if(isLong(s,kk))return false;
            check = isSame(s,kk);
            if(check) return check;
            if(k==1073741824)break;
            k*=2;
        }
        return false;
    }
};