class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int> Q;
        int n = nums.size();
        for(int i=0; i<n; i++)Q.push(nums[i]);
        while(k>1){
            Q.pop();
            k--;
        }
        return Q.top();
    }
};