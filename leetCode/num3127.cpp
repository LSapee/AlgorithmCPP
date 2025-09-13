class Solution {
public:
    bool canMakeSquare(vector<vector<char>>& grid) {
        int n =2,m=2;
        bool check = false;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                int temp =0;
                if(grid[i][j]=='W') temp++;
                if(grid[i][j+1]=='W')temp++;
                if(grid[i+1][j]=='W')temp++;
                if(grid[i+1][j+1]=='W')temp++;
                if(temp==3 || temp==4 || temp==1 || temp==0)check=true;
                if(check)break;
            }
            if(check)break;
        }
        return check;
    }
};