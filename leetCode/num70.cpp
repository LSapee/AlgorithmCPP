class Solution {
public:
    int climbStairs(int n) {
        ios::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        if(n<3)return n;
        int arr[n+1];
        arr[1] =1;
        arr[2] =2;
        for(int i=3; i<=n; i++){
            arr[i] = arr[i-2]+arr[i-1];
        }

        return arr[n];
    }
};