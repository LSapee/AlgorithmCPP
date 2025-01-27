class Solution {
public:
    int arr[50002];
    int thisDegree(vector<int>& nums, int target){
        int st=0,ed=0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]==target){
                st= i;
                break;
            }
        }
        for(int i=nums.size()-1; i>st; i--){
            if(nums[i]==target){
                ed= i;
                break;
            }
        }
        return (ed-st)+1;
    }

    int findShortestSubArray(vector<int>& nums) {
        int mx = 0;
        for(int i=0; i<nums.size(); i++) arr[nums[i]]++;
        for(int i=0; i<=50000; i++)mx = max(mx,arr[i]);
        if(mx==1)return 1;
        vector<int> targetNums;
        for(int i=0; i<=50000; i++) if(arr[i]==mx)targetNums.push_back(i);
        int ans =50001;
        for(int i=0; i<targetNums.size(); i++) ans = min(ans,thisDegree(nums,targetNums[i]));
        return ans;
    }
};