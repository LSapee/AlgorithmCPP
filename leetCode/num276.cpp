class Solution {
public:
    int numWays(int n, int k) {
        if(n==1)return k;
        if (n ==2) return k*k;
        int arr[n+1];
        for(int i=0; i<=n; i++)arr[i]=0;
        arr[1] = k;
        arr[2] = k*k;
        for(int i=3; i<=n; i++)arr[i] = (k-1)*(arr[i-1]+arr[i-2]);
        return arr[n];
    }
};