class Solution {
public:
#define LL long long
    int maxSubArrayLen(vector<int>& nums, int k) {
        int n = nums.size();
        LL prefixSum= 0;
        LL sub =0;
        unordered_map<LL,LL> mp; // unordered_map<LL,LL> mp << 사용시 시간 단축이 더 됨..........
        for(int i=0; i<n; i++){
            prefixSum += nums[i];
            if(prefixSum==k) sub = i+1;
            if(mp.find((LL)prefixSum-k)!= mp.end()){
                sub = max(sub,(LL)i-mp[prefixSum-k]);
            }
            if(mp.find(prefixSum)==mp.end()){
                mp[prefixSum]=i;
            }
        }

        return sub;
    }
};