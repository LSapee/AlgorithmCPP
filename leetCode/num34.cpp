class Solution {
public:
    vector<int> ans;
    int n;
    int findLower(vector<int>& nums, int target){
        int st =0;
        int ed = n;
        while(st<ed){
            int mid = (st+ed)/2;
            if(target<=nums[mid]){
                ed = mid;
            }else{
                st = mid+1;
            }
        }
        return st;
    }
    int findUpper(vector<int>& nums, int target){
        int st =0;
        int ed = n;
        while(st<ed){
            int mid = (st+ed)/2;
            if(target>=nums[mid]){
                st=mid+1;
            }else{
                ed=mid;
            }
        }
        return st-1;
    }

    vector<int> searchRange(vector<int>& nums, int target) {
        n = nums.size();
        ans.resize(2,-1);
        if(binary_search(nums.begin(),nums.end(),target)!=1)return ans;
        ans[0]= findLower(nums,target);
        ans[1]=findUpper(nums,target);
        return ans;
    }
};