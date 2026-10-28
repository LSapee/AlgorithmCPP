class Solution {
public:
    int n,m;
    int dx[8] = {0,1,1,1,0,-1,-1,-1};
    int dy[8] = {1,1,0,-1,-1,-1,0,1};
    int addA(int c,vector<vector<int>>& img,int i,int j){
        int cnt =1;
        for(int z=0; z<8; z++){
            int x = i+dx[z];
            int y = j+dy[z];
            if(x<0||x>=n||y<0||y>=m)continue;
            cnt++;
            c+=img[x][y];
        }
        return c/cnt;
    }

    vector<vector<int>> imageSmoother(vector<vector<int>>& img) {
        n = img.size();
        m = img[0].size();
        vector<vector<int>> ans(n,vector<int>(m));
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                ans[i][j]=addA(img[i][j],img,i,j);
            }
        }
        return ans;
    }
};
