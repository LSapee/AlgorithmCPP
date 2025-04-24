class Solution {
public:
    int countCompleteSubarrays(vector<int>& nums) {
        vector<int> arr(2001,0);
        unordered_map<int,int> mp;
        int uni=0,n=nums.size(),r=0,ans=0;
        unordered_set<int> st;
        for(int k : nums) st.insert(k);
        uni = st.size();
        unordered_map<int,int> cnt;
        for(int i=0; i<n; i++){
            if(i>0){
                int back = nums[i-1];
                cnt[back]--;
                if(cnt[back]==0) cnt.erase(back);
            }
            while(r<n&&cnt.size()<uni){
                int add= nums[r++];
                cnt[add]++;
            }
            if(cnt.size() ==uni) ans+=(n-r+1);
        }
        return ans;
    }
};