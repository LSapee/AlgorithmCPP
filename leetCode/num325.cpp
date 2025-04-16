class Solution {
public:
#define LL long long
    int maxSubArrayLen(vector<int>& nums, int k) {
        int n = nums.size();
        LL prifixSum= 0;
        LL sub =0;
        map<LL,LL> mp; // unordered_map<LL,LL> mp << 사용시 시간 단축이 더 됨..........
        for(int i=0; i<n; i++){
            prifixSum += nums[i];
            if(prifixSum==k) sub = i+1;
            if(mp.find((LL)prifixSum-k)!= mp.end()){
                sub = max(sub,(LL)i-mp[prifixSum-k]);
            }
            if(mp.find(prifixSum)==mp.end()){
                mp[prifixSum]=i;
            }
        }

        return sub;
    }
};