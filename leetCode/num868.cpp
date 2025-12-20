class Solution {
public:
    int binaryGap(int n) {
        string s = "";
        int ans =0;
        while(n>0){
            s= to_string(n%2)+s;
            n/=2;
        }
        cout<<s;
        for(int i=0; i<s.size(); i++){
            if(s[i]=='1'){
                for(int j=i+1; j<s.size(); j++){
                    if(s[j]=='1'){
                        ans=max(ans,j-i);
                        break;
                    }
                }
            }
        }
        return ans;
    }
};