class Solution {
public:
    int countComponents(int n, vector<vector<int>>& edges) {
        int cnt =0;
        vector<int> vis(n,0);
        vector<vector<int>> arr(n,vector<int>(0));
        int m = edges.size();
        for(int i=0; i<m; i++){
            int a = edges[i][0];
            int b = edges[i][1];
            arr[a].push_back(b);
            arr[b].push_back(a);
        }
        queue<int> Q;
        Q.push(0);
        for(int i=0; i<n; i++){
            if(vis[i])continue;
            cnt++;
            Q.push(i);
            vis[i] =1;
            while(!Q.empty()){
                int cur = Q.front(); Q.pop();
                for(int j=0; j<arr[cur].size(); j++){
                    int nxt = arr[cur][j];
                    if(vis[nxt])continue;
                    Q.push(nxt);
                    vis[nxt] =1;
                }
            }
        }
        return cnt;
    }
};