class Solution {
public:
    vector<bool> vis;
    bool canReach(vector<int>& arr, int start) {
        int n = arr.size();
        vis.resize(n,false);
        vis[start] = true;
        queue<int> Q;
        Q.push(start);
        unordered_set<int> goals;
        for(int i=0; i<n; i++){
            if(arr[i]==0){
                goals.insert(i);
            }
        }
        while(!Q.empty()){
            int cur = Q.front(); Q.pop();
            int prev = cur-arr[cur];
            int nxt = cur+arr[cur];
            if(prev>=0&& !vis[prev]){
                vis[prev] = true;
                Q.push(prev);
            }
            if(nxt<n&&!vis[nxt]){
                vis[nxt] = true;
                Q.push(nxt);
            }
        }
        for(auto goal: goals)if(vis[goal])return true;
        return false;
    }
};