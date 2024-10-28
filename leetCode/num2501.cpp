class Solution {
public:
    int longestSquareStreak(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        unordered_set<int> st;
        for(int i:nums)st.insert(i);
        int ans =-1;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]==-1)continue;
            int k = nums[i];
            int cnt=1;
            while(k<=1000){
                if(st.find(k*k)==st.end())break;
                k*=k;
                cnt++;
            }
            if(cnt!=1)ans = max(ans,cnt);
        }
        return ans;
    }
};