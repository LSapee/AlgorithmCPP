class Solution {
public:
    int n,m;
    bool isOk(int a, int b, vector<vector<int>>& grid){
        if(a+3>n||b+3>m)return false;
        int x = grid[a][b]+grid[a+1][b+1]+grid[a+2][b+2];
        int xx =grid[a][b+2]+grid[a+1][b+1]+grid[a+2][b];
        if(x!=xx)return false;
        int arr[16];
        fill(arr,arr+16,0);
        vector<int> rows(3,0);
        for(int i=a; i<a+3; i++){
            for(int j=b; j<b+3; j++){
                rows[i-a] += grid[i][j];
                arr[grid[i][j]]++;
                //마방진은 1~9만 가능함...........
                if(grid[i][j]>9||grid[i][j]==0)return false;
            }
        }
        vector<int> cols(3,0);
        for(int i=b; i<b+3; i++){
            for(int j=a; j<a+3; j++){
                cols[i-b]+= grid[j][i];
            }
        }
        for(int i=0; i<3; i++){
            if(cols[i]!=x||rows[i]!=x)return false;
        }

        for(int i=0; i<16; i++)if(arr[i]>1)return false;
        return true;
    }

    int numMagicSquaresInside(vector<vector<int>>& grid) {
        n = grid.size();
        m = grid[0].size();
        if(n<3||m<3)return 0;
        int ans =0;
        for(int i=0; i<=n-3; i++){
            for(int j=0; j<=m-3; j++){
                if(isOk(i,j,grid)) ans++;
            }
        }
        return ans;
    }
};

