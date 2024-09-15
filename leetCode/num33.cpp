class Solution {
public:
    int minIndexNum(vector<int>& nums){
        for(int i=0; i<nums.size()-1; i++){
            if(nums[i]>nums[i+1])return i+1;
        }
        return 0;
    }
    int bs(vector<int>& nums,int st,int ed,int target){
        while(st<=ed){
            int mid = (st+ed)/2;
            if(nums[mid]==target){
                return mid;
            }else if(nums[mid]>target){
                ed = mid-1;
            }else{
                st = mid+1;
            }
        }
        return -1;
    }
    int search(vector<int>& nums, int target) {
        int minIndex = minIndexNum(nums);
        int ans = bs(nums,0,minIndex,target);
        ans = max(ans,bs(nums,minIndex,nums.size()-1,target));
        return ans;
    }
};