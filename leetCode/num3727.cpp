
//gemini 코드
// 내가 작성한 코드 45ms 나오길래 물어봄.
// 핵심은 기존에 sort의 경우 N log N 걸리던 것을 nth_element로 하여 시간복잡도를 N으로 단축 및 투포인터 쓰던것을 그냥 2개의 for문으로 분할처리.
// 실제연산은 2N으로 수렴.
class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        int n = nums.size();
        for(int i = 0; i < n; i++) {
            nums[i] *= nums[i];
        }

        int half = n / 2;
        // 배열을 정확히 중간(half)을 기준으로 분할 (평균 시간 복잡도 O(N))
        // half 인덱스 이전에는 작은 값들이, 이후에는 큰 값들이 모이게 됨
        nth_element(nums.begin(), nums.begin() + half, nums.end());

        long long ans = 0;
        // 하위 그룹(작은 값들)은 빼주고
        for(int i = 0; i < half; i++) {
            ans -= nums[i];
        }
        // 상위 그룹(큰 값들)은 더해줌
        for(int i = half; i < n; i++) {
            ans += nums[i];
        }

        return ans;
    }
};



// class Solution {
// public:
//     long long maxAlternatingSum(vector<int>& nums) {
//         long long ans =0;
//         int n = nums.size();
//         for(int i=0; i<n; i++) nums[i]*=nums[i];
//         sort(nums.begin(),nums.end());
//         int st =0;
//         int ed =n-1;
//         while(st<=ed){
//             ans+=nums[ed--];
//             if(st>ed)break;
//             ans-=nums[st++];
//         }
//         return ans;
//     }
// };
