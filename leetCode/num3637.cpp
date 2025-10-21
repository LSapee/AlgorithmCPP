class Solution {
public:
    bool isTrionic(vector<int>& nums) {
        int n =nums.size();
        if(n==3)return false;
        int st =1;
        int temp =1;
        while(st<n){
            if(nums[st-1]<nums[st])st++;
            else break;
        }
        if(st==n || st==temp)return false;
        temp = st;
        while(st<n){
            if(nums[st-1]>nums[st])st++;
            else break;
        }
        if(st==n || st==temp)return false;
        temp= st;
        while(st<n){
            if(nums[st-1]<nums[st])st++;
            else break;
        }
        if(st!=n)return false;
        return true;
    }
};