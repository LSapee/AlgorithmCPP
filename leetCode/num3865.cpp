class Solution {
public:
    vector<int> reverseSubarrays(vector<int>& nums, int k) {
        int n = nums.size();
        int len = n/k;
        for(int i=0; i<n; i+=len){
            int ed = i+len-1;
            int st = i;
            if(ed > n)break;
            while(st<ed){
                swap(nums[st],nums[ed]);
                st++;
                ed--;
            }
        }
        return nums;
    }
};