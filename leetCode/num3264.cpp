class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
        for(int i=0; i<nums.size(); i++)pq.push({nums[i],i});
        for(int i=0; i<k; i++){
            if(!pq.empty()){
                auto cur = pq.top();pq.pop();
                nums[cur.second] = cur.first*multiplier;
                pq.push({nums[cur.second],cur.second});
            }
        }
        return nums;
    }
};