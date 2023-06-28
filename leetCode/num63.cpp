class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        ios::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        int n = obstacleGrid.size();
        int m = obstacleGrid[0].size();
        int arr[n][m];
        fill(arr[0],arr[n],0);
        for(int i=0; i<m; i++){
            if(obstacleGrid[0][i]==1)break;
            arr[0][i] = 1;
        }
        for(int i=0; i<n; i++){
            if(obstacleGrid[i][0]==1)break;
            arr[i][0] =1;
        }
        for(int i=1; i<n; i++){
            for(int j=1; j<m; j++){
                if(obstacleGrid[i][j]==1) continue;
                arr[i][j] = arr[i-1][j]+arr[i][j-1];
            }
        }
        return arr[n-1][m-1];
    }
};