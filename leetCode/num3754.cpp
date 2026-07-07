class Solution {
public:
    long long sumAndMultiply(int n) {
        if(n==0)return 0;
        string s ="";
        long long k =0;
        while(n>0){
            int t = n%10;
            n/=10;
            if(t==0)continue;
            k+=t;
            s+=to_string(t);
        }
        reverse(s.begin(),s.end());
        long long ans = stoll(s);
        return ans*k;
    }
};