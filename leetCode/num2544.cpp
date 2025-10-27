class Solution {
public:
    int alternateDigitSum(int n) {
        int ans =0;
        string s=to_string(n);
        for(int i=0; i<s.size(); i++){
            int k = s[i]-'0';
            if(i%2==0)ans+=k;
            else ans-=k;
        }
        return ans;
    }
};