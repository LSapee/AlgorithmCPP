class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int st=0;
        int end = nums.size();
        int mid =0;
        if(target>nums[end-1]) return end;
        while(st<=end){
            mid = (st+end)/2;
            if(target==nums[mid]){
                return mid;
            }else if(nums[mid]>target){
                end = mid -1;
            }else if(nums[mid]<target){
                st = mid+1;
            }
        }
        return st;
    }
};