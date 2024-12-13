class Solution {
public:
    long long findScore(vector<int>& nums) {
        long long score = 0;
        int n = nums.size();
        vector<bool> vis(n,false);
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
        for(int i=0; i<n; i++)pq.push({nums[i],i});
        while(!pq.empty()){
            auto cur = pq.top(); pq.pop();
            if(vis[cur.second])continue;
            int back = cur.second-1;
            int nxt = cur.second+1;
            if(back>=0)vis[back]= true;
            if(nxt<n)vis[nxt]=true;
            vis[cur.second]=true;
            score+=cur.first;
        }
        return score;
    }
};