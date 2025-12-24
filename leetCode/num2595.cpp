class Solution {
public:
    vector<int> evenOddBit(int n) {
        string s = "";
        vector<int> ans(2,0);
        while(n>0){
            s = s+to_string(n%2);
            n/=2;
        }
        for(int i=0; i<s.size(); i++){
            if(i%2==0){
                if(s[i]=='1')ans[0]++;
            }else {
                if(s[i]=='1')ans[1]++;
            }
        }
        return ans;
    }
};