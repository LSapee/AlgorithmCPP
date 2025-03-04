class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        int st =0;
        int n = nums.size();
        int ed =  n-1;
        vector<int> ans(n,0);
        deque<int> dq;
        for(int i=0; i<n; i++){
            if(nums[i]==pivot) dq.push_front(pivot);
            else if(nums[i]<pivot)ans[st++]= nums[i];
            else dq.push_back(nums[i]);
        }
        while(!dq.empty()){
            ans[st++]=dq.front();dq.pop_front();
        }
        return ans;
    }
};