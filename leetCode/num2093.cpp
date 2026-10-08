class Solution {
public:
    struct State{
        int cost;
        int city;
        int discount_cnt;

        bool operator<(const State& other) const{
            return cost>other.cost;
        }
    };

    int minimumCost(int n, vector<vector<int>>& highways, int discounts) {
        vector<vector<pair<int,int>>> adj(n);
        for(auto a:highways){
            int x = a[0];
            int y = a[1];
            int toll = a[2];
            adj[x].push_back({y,toll});
            adj[y].push_back({x,toll});
        }
        vector<vector<int>> dist(n,vector<int>(discounts+1,INT_MAX));
        priority_queue<State> PQ;

        PQ.push({0,0,discounts});
        dist[0][discounts]=0;

        while(!PQ.empty()){
            auto cur = PQ.top();
            PQ.pop();
            if(cur.city == n-1)return cur.cost;
            if(cur.cost > dist[cur.city][cur.discount_cnt])continue;

            for(auto &edge : adj[cur.city]){
                int nxt_city = edge.first;
                int toll = edge.second;

                int nxt_cost = cur.cost+toll;
                if(nxt_cost<dist[nxt_city][cur.discount_cnt]){
                    dist[nxt_city][cur.discount_cnt] = nxt_cost;
                    PQ.push({nxt_cost,nxt_city,cur.discount_cnt});
                }
                if(cur.discount_cnt>0){
                    int nxt_cost_dis = cur.cost+(toll/2);
                    if(nxt_cost_dis<dist[nxt_city][cur.discount_cnt-1]){
                        dist[nxt_city][cur.discount_cnt-1] = nxt_cost_dis;
                        PQ.push({nxt_cost_dis,nxt_city,cur.discount_cnt-1});
                    }
                }
            }
        }
        // 해당 지점에 도착 하지 못한다면.
        return -1;
    }
};