class Solution {
public:
    int check(int st,vector<int>& nums){
        for(int i= st+1; i<nums.size(); i++){
            if(nums[i-1]+1!=nums[i])return i-1;
        }
        return nums.size()-1;
    }

    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> ans;
        int st =0;
        while(st<nums.size()){
            int ed = check(st,nums);
            if(st==ed){
                ans.push_back(to_string(nums[st]));
                st++;
            }else{
                ans.push_back(to_string(nums[st])+"->"+to_string(nums[ed]));
                st = ed+1;
            }
        }
        return ans;
    }
};