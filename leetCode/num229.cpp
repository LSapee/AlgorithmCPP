class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        int target = n/3;
        vector<int> ans;
        sort(nums.begin(),nums.end());
        int cnt =1;
        for(int i=1; i<n; i++){
            if(nums[i-1]== nums[i])cnt++;
            else{
                if(cnt>target)ans.push_back(nums[i-1]);
                cnt = 1;
            }
        }
        if(cnt>target)ans.push_back(nums[n-1]);
        return ans;
    }
};