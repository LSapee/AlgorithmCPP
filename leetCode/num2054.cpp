class Solution {
public:
    int maxTwoEvents(vector<vector<int>>& events) {
        sort(events.begin(),events.end());
        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
        int mx =0;
        int maxSum =0;
        for(auto event :events){
            while(pq.size() &&pq.top().first<event[0]){
                mx =max(mx,pq.top().second);
                pq.pop();
            }
            maxSum = max(maxSum,mx+event[2]);
            pq.push({event[1],event[2]});
        }
        return maxSum;
    }
};