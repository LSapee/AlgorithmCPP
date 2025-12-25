class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> pq;
        for(auto a : stones) pq.push(a);
        while(pq.size()>1){
            int a = pq.top(); pq.pop();
            int b = pq.top(); pq.pop();
            if(a-b==0)continue;
            else pq.push(abs(a-b));
        }
        if(pq.size()==1)return pq.top();
        return 0;
    }
};