class Solution {
public:
    int minInsertions(string s) {
        int n = s.size();
        int l =0;
        int r =0;
        int ans =0;
        for(int i=0; i<n; i++){
            if(s[i]=='('){
                if(r==1){
                    if(l>0){
                        ans++;
                        l--;
                    }else{
                        ans+=2;
                    }
                    r=0;
                }
                l++;
            }else{
                r++;
                if(r==2){
                    if(l==0)ans++;
                    else if(l>0)l--;
                    r=0;
                }
            }
        }
        if(r>0){
            if(l>0){
                l--;
                ans++;
            }else ans+=2;
        }
        if(l>0)ans+=l*2;
        return ans;
    }
};