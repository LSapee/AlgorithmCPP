class Solution {
public:
    // j-i = nums[j]-nums[i]
    // j-nums[j] = -nums[i]+i == j-nums[j] = i-nums[i];
    // 좋은 pairdms j-nums[j] = i-nums[i];
    long long countBadPairs(vector<int>& nums) {
        long long cnt =0;
        int n = nums.size();
        unordered_map<int,int> mp;
        for(int i=0; i<n; i++){
            int j = i-nums[i];
            int goodPairs = mp[j];
            cnt+= i-goodPairs;
            mp[j] = goodPairs+1;
        }
        return cnt;
    }
};