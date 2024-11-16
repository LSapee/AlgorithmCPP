class Solution {
public:
    // 연속되는지 확인 후 가장 큰수 반환
    int result(vector<int> &nums, int st, int ed){
        int mx = nums[st];
        for(int i=st+1; i<=ed; i++){
            if(nums[i-1]+1 == nums[i]){
                mx = max(nums[i],mx);
            }else return -1;
        }
        return mx;
    }

    vector<int> resultsArray(vector<int>& nums, int k) {
        if(k==1)return nums;
        int n = nums.size();
        vector<int> ans;
        for(int i=k-1; i<n; i++){
            ans.push_back(result(nums,i+1-k,i));
        }
        return ans;
    }
};