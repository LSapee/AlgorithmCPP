class Solution {
public:
    int maxSum(vector<int>& nums) {
        int n =nums.size();
        unordered_set<int> st;
        int ans = 0;
        for(int i=0; i<n; i++){
            if(nums[i]>0) st.insert(nums[i]);
        }
        for(auto a : st) ans += a;
        if(st.size() ==0) ans = *max_element(nums.begin(),nums.end());
        return ans;
    }
};