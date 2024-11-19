class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        vector<long long> dp(n,0);
        if(nums.size()<k)return 0;
        long long sum =0;
        long long ans =0;
        unordered_set<int> st;
        queue<int> Q;
        for(int i=0; i<n; i++){
            if(st.find(nums[i])!=st.end()){
                while(!Q.empty()&&st.find(nums[i])!=st.end()){
                    st.erase(Q.front());
                    sum-=Q.front();
                    Q.pop();
                }
            }
            Q.push(nums[i]);
            sum+=nums[i];
            st.insert(nums[i]);
            if(Q.size()==k){
                ans = max(ans,sum);
                st.erase(Q.front());
                sum-=Q.front();Q.pop();

            }

        }
        return ans;
    }
};