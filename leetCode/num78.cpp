class Solution {
public:
    vector<vector<int>> ans;
    void back(vector<int>& nums, vector<int> temp,int len,int k){
        if(temp.size()==len){
            ans.push_back(temp);
            return;
        }
        for(int i=k; i<nums.size(); i++){
            if(temp.size()!=0 && temp[temp.size()-1]>=nums[i])continue;
            temp.push_back(nums[i]);
            back(nums,temp,len,k+1);
            temp.pop_back();
        }
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        ans.push_back({});
        sort(nums.begin(),nums.end());
        int n = nums.size();
        vector<int> temp;
        for(int i=1; i<=n; i++)back(nums,temp,i,0);
        return ans;
    }
};