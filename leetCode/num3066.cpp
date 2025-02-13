class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        priority_queue<long long,vector<long long>,greater<long long>> pq;
        for(int i=0; i<nums.size(); i++) if(nums[i]<k)pq.push(nums[i]);
        int ans =0;
        while(pq.size()>=2){
            long long cur = pq.top(); pq.pop();
            long long nxt = pq.top(); pq.pop();
            if((cur*2)+nxt>=k){
                ans++;
                continue;
            }else{
                ans++;
                pq.push((cur*2)+nxt);
            }
        }
        if(!pq.empty())ans++;
        return ans;
    }
};