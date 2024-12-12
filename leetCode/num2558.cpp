class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        long long ans =0;
        priority_queue<int> pq;
        for(int gift : gifts)pq.push(gift);
        while(k--){
            int p = pq.top(); pq.pop();
            p = sqrt(p);
            pq.push(p);
        }
        while(!pq.empty()){
            ans+=pq.top();pq.pop();
        }
        return ans;
    }
};