class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        int ans = original;
        unordered_set<int> st;
        int n = nums.size();
        for(int i=0; i<n; i++)st.insert(nums[i]);
        while(st.find(ans)!=st.end()){
            ans*=2;
        }
        return ans;
    }
};