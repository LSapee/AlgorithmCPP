class Solution {
public:
    bool isHappy(int n) {
        ios::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        int ans =n;
        map<int,int> m;
        m[n]++;
        do{
            int k =0;
            while(n>0){
                k += (n%10)*(n%10);
                n/=10;
            }
            if(k==1) return true;
            ans = k;
            n=ans;
            if(m[n]>0) return false;
            m[n]++;
        }
        while(ans>0);
        return false;
    }
};