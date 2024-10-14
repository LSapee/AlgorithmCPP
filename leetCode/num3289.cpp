class Solution {
public:
    int cnt[101];
    vector<int> getSneakyNumbers(vector<int>& nums) {
        for(int i=0; i<nums.size(); i++){
            cnt[nums[i]]++;
        }
        vector<int> ans;
        for(int i=0; i<101; i++)if(cnt[i]>1)ans.push_back(i);
        return ans;
    }
};