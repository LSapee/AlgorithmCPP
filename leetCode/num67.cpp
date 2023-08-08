class Solution {
public:
    string addBinary(string a, string b) {
        string ans;
        int up =0;
        int n = a.size()-1;
        int m = b.size()-1;
        while(n>=0 || m>=0 || up){
            if(n >=0){
                up += a[n--]-'0';
            }
            if(m >=0){
                up += b[m--]-'0';
            }
            ans+= up %2+'0';
            up/=2;
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};