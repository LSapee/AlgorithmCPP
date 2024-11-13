class Solution {
public:
    int lowerBound(vector<int>& nums, int st,int ed, int target){
        while(st<=ed){
            int mid = st+((ed-st)/2);
            if(nums[mid]>=target){
                ed=mid -1;
            }else{
                st = mid+1;
            }
        }
        return st;
    }
    long long countFairPairs(vector<int>& nums, int lower, int upper) {
        sort(nums.begin(),nums.end());
        int n = nums.size()-1;
        long long ans =0;
        for(int i=0; i<nums.size(); i++){
            int low = lowerBound(nums,i+1,n,lower-nums[i]);
            int up = lowerBound(nums,i+1,n,upper-nums[i]+1);
            ans+= up-low;
        }
        return ans;
    }
};
/*
 * 범위 찾기
 * nums[i]랑 i번째 이후의 조합 가능한 가장 작은 수
 * nums[i]랑 i번째 이후의 조합 가능한 가장 큰 수
 * 가장 큰 수 -가장 작은 수 = nums[i]랑 조합 가능한 수들
 * 배열 길이가 10^5라 2중 포문으로는
 */