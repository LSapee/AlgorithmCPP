class Solution {
public:
    int uniquePaths(int m, int n) {
        ios::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        if(n==1 && m==1) return 1;
        int arr[m][n];
        for(int i=1; i<n; i++){
            arr[0][i] =1;
        }
        for(int i=1; i<m; i++){
            arr[i][0] =1;
        }
        for(int i=1; i<m; i++){
            for(int j=1; j<n; j++){
                arr[i][j] = arr[i][j-1]+arr[i-1][j];
            }
        }
        return arr[m-1][n-1];
    }
}