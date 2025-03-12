class Solution {
public:
    int lS(vector<int>& nums,int n){
        int st = 0;
        int ed =n-1;
        while(st<=ed){
            int mid = (st+ed)/2;
            if(nums[mid]>=0){
                ed = mid-1;
            }else{
                st = mid+1;
            }
        }
        return st;
    }
    int rS(vector<int>& nums,int n){
        int st = 0;
        int ed =n-1;
        while(st<=ed){
            int mid = (st+ed)/2;
            if(nums[mid]<=0){
                st = mid+1;
            }else{
                ed = mid-1;
            }
        }
        return st;
    }
    int maximumCount(vector<int>& nums) {
        int n = nums.size();
        if(nums[0]>0 ||nums[n-1]<0)return n;
        int left = lS(nums,n);
        int right = rS(nums,n);
        return max(left,n-right);

    }
};