class Solution {
public:
    // 풀이 보고 품 뭔지 다시한번 찾아보기
    long long maximumTripletValue(vector<int>& nums) {
        int n = nums.size();
        long long r = 0,mx=0,dmx=0;
        for(int i=0; i<n; i++){
            r = max(r,dmx*nums[i]);
            dmx = max(dmx,mx-nums[i]);
            mx = max(mx,static_cast<long long>(nums[i]));
        }
        return r;
    }
};