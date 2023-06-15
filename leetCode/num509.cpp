class Solution {
public:
    long long fib(int n) {
        ios::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        if(n<2) return n;
        long long arr[n+1];
        arr[0]=0;
        arr[1]=1;
        for(int i=2; i<=n; i++) arr[i]= arr[i-1] + arr[i-2];
        return arr[n];
    }
};