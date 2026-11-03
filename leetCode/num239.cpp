class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        priority_queue<int> PQ;
        int n = nums.size();
        vector<int> ans;
        unordered_map<int,int> mp;
        for(int i=0; i<k; i++) {
            PQ.push(nums[i]);
            mp[nums[i]]= i;
        }
        ans.push_back(PQ.top());
        for(int i=k; i<n; i++){
            PQ.push(nums[i]);
            mp[nums[i]] =i;
            while(!PQ.empty() && mp[PQ.top()]<=i-k){
                PQ.pop();
            }
            ans.push_back(PQ.top());
        }
        return ans;
    }
};