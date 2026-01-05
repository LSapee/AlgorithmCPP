class Leaderboard {
public:
    // 그냥 map일때 12ms
    // unordered_map 일때 8ms
    //  map -> erase  에서 map[key] = 0으로 처리하면 11ms으로 느려짐.
    // 4ms ~6ms로 나옴 O(N logN)
    unordered_map<int,int> mp;
    vector<int> arr;
    Leaderboard() {
        arr.resize(10003,0);
    }

    void addScore(int playerId, int score) {
        arr[playerId] += score;
        mp[playerId]+= score;
    }

    int top(int K) {
        priority_queue<int> pq;
        for(auto a : mp)pq.push(a.second);
        int ans = 0;
        while(K>0&& !pq.empty()){
            ans+=pq.top();
            pq.pop();
            K--;
        }
        return ans;
    }

    void reset(int playerId) {
        arr[playerId] = 0;
        mp.erase(playerId);
    }
};

/**
 * Your Leaderboard object will be instantiated and called as such:
 * Leaderboard* obj = new Leaderboard();
 * obj->addScore(playerId,score);
 * int param_2 = obj->top(K);
 * obj->reset(playerId);
 */