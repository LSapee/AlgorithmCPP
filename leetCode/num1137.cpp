class Solution {
public:
    int tribonacci(int n) {
        ios::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        if(n<2)return n;
        int arr[n+1];
        arr[0] = 0;
        arr[1] =1;
        arr[2] = 1;
        for(int i=3; i<=n; i++)arr[i]=arr[i-3]+arr[i-2]+arr[i-1];
        return arr[n];
    }
};