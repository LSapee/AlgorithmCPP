class Solution {
public:
    int minMoves2(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        long long ans =0;
        int l=0;
        int r=n-1;
        while(l<r){
            ans+=abs(nums[l]-nums[r]);
            l++;
            r--;
        }
        return (int)ans;
    }
};