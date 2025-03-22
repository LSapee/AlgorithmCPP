class Solution {
public:
    int countCompleteComponents(int n, vector<vector<int>>& edges) {
        int ans =0;
        vector<vector<int>> arr(n);
        for(int i=0; i<edges.size(); i++){
            int a = edges[i][0],b= edges[i][1];
            arr[a].push_back(b);
            arr[b].push_back(a);
        }
        vector<bool> vis(n,false);
        for(int i=0; i<n; i++){
            if(vis[i])continue;
            vector<int> temp;
            queue<int> Q;
            Q.push(i);
            vis[i]=true;
            while(!Q.empty()){
                int cur = Q.front(); Q.pop();
                temp.push_back(cur);
                for(int a : arr[cur]){
                    if(vis[a])continue;
                    Q.push(a);
                    vis[a] = true;
                }
            }
            bool check = true;
            for(int a :temp){
                if(arr[a].size()!=temp.size()-1){
                    check = false;
                    break;
                }
            }
            if(check)ans++;
        }
        return ans;
    }
};