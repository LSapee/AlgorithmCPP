class Solution {
public:
    vector<vector<int>> ans;
    bool isUnque(int a,int b,int c){
        for(int i=0; i<ans.size(); i++){
            if(ans[i][0]==a&&ans[i][1]==b&&ans[i][2]==c)return false;
        }
        return true;
    }

    void twoSum(vector<int>& nums,int k,int st,int ed){
        while(st<ed){
            int t= k+nums[st]+nums[ed];
            if(t==0){
                if(isUnque(k,nums[st],nums[ed]))ans.push_back({k,nums[st],nums[ed]});
                if(nums[st+1]==nums[st])st++;
                else if(nums[ed-1]==nums[ed])ed--;
                else {
                    st++;
                    ed--;
                }
            }else if(t<0)st++;
            else ed--;
        }

    }

    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n =nums.size();
        for(int i=0; i<n; i++){
            twoSum(nums,nums[i],i+1,n-1);
        }
        return ans;
    }
};