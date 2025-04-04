class Solution {
public:
    // 풀이 보고 품 뭔지 다시한번 찾아보기
    long long maximumTripletValue(vector<int>& nums) {
        int n = nums.size();
        // ans = 결과값
        // mx = 이전까지 나온 값중에서 가장 큰값
        // dmx = 이전의 max(num[a]-num[a+1~i-1],mx-nums[i])
        long long ans = 0,mx=0,dmx=0;
        for(int i=0; i<n; i++){
            ans = max(ans,dmx*nums[i]);
            dmx = max(dmx,mx-nums[i]);
            mx = max(mx,static_cast<long long>(nums[i]));
        }
        return r;
    }
};