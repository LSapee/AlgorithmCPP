class Solution {
public:
    bool confusingNumber(int n) {
        ios::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        int ans =0,a=n;
        while(a>0){
            int k = a%10;
            a=a/10;
            if(k==0 ||k==1|| k==8){
                ans+=k;
                ans*=10;
            }else if(k==6){
                ans += 9;
                ans *= 10;
            }else if(k==9){
                ans+=6;
                ans*=10;
            }else {
                return false;
            }
        }
        ans=ans/10;
        cout<<ans;
        if(n!=ans) return true;
        return false;
    }
};