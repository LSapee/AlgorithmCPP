class Solution {
public:
    int numberOfSubmatrices(vector<vector<char>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>> arr1(n,vector<int>(m));
        vector<vector<int>> arr2(n,vector<int>(m));
        int cnt = 0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                arr1[i][j] = (grid[i][j]=='X');
                arr2[i][j] = (grid[i][j]=='Y');
                if(i>0){
                    arr1[i][j] += arr1[i-1][j];
                    arr2[i][j] += arr2[i-1][j];
                }
                if(j>0){
                    arr1[i][j] += arr1[i][j-1];
                    arr2[i][j] += arr2[i][j-1];
                }
                if(i>0 && j>0){
                    arr1[i][j] -= arr1[i-1][j-1];
                    arr2[i][j] -= arr2[i-1][j-1];
                }
                if(arr1[i][j] && arr1[i][j] == arr2[i][j])cnt++;
            }
        }
        return cnt;
    }
};