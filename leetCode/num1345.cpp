class Solution {
public:
    int minJumps(vector<int>& arr) {
        int n = arr.size();
        multimap<int,int> mmp;
        vector<int> vis(n,-1);
        for(int i=0; i<n; i++) mmp.insert({arr[i],i});
        vis[0]= 0;
        queue<int> Q;
        Q.push(0);
        while(!Q.empty()){
            int cur = Q.front(); Q.pop();
            for(auto it= mmp.lower_bound(arr[cur]); it!=mmp.upper_bound(arr[cur]); it++){
                int nxtIndex = it->second;
                if(vis[nxtIndex] != -1)continue;
                vis[nxtIndex] = vis[cur]+1;
                Q.push(nxtIndex);
            }
            mmp.erase(arr[cur]);
            int prev = cur-1;
            int nxt = cur+1;
            if(prev>=0 && vis[prev]== -1){
                vis[prev] = vis[cur]+1;
                Q.push(prev);
            }
            if(nxt<n && vis[nxt] == -1){
                vis[nxt] = vis[cur]+1;
                Q.push(nxt);
            }
            if(vis[n-1]!=-1)return vis[n-1];
        }
        return 0;
    }
};

// 멀티맵 반복 탐색을 없애기 위해서 지워준게 킵!