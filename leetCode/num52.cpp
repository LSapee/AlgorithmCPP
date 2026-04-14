class Solution {
public:
    vector<vector<int>> vis;
    void checked(int &x,int &i,int &n, bool ok){
        if(ok){
            vis[x][i]++;
            for(int k=1; x+k<n; k++)vis[x+k][i]++; // 아래칸
            for(int k=1; i+k<n&& x+k<n; k++)vis[x+k][i+k]++; // 우측 하단
            for(int k=1; i-k>=0&& x+k<n; k++)vis[x+k][i-k]++; // 좌측 하단
        }else{
            vis[x][i]--;
            for(int k=1; x+k<n; k++)vis[x+k][i]--;
            for(int k=1; i+k<n&& x+k<n; k++)vis[x+k][i+k]--;
            for(int k=1; i-k>=0&& x+k<n; k++)vis[x+k][i-k]--;
        }
    }

    void back(int x,int &n, int &ans){
        if(x==n){
            ans++;
            return ;
        }
        for(int i=0; i<n; i++){
            if(vis[x][i]>0)continue;
            checked(x,i,n,true);
            back(x+1,n,ans);
            checked(x,i,n,false);
        }
    }

    int totalNQueens(int n) {
        if(n==1)return 1;
        if(n<4)return 0;
        int ans = 0;
        vis.resize(n,vector<int>(n,0));
        back(0,n,ans);
        return ans;
    }
};