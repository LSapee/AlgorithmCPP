class Solution {
public:
    long long maxTotalValue(vector<int>& nums, int k) {
        long long x = LLONG_MAX, y = LLONG_MIN;
        for(int num : nums){
            x = min(x,(long long)num);
            y = max(y,(long long)num);
        }
        return (y-x)*k;
    }
};