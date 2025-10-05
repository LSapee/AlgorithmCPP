class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) {
        int temp =0;
        int n =nums.size();
        unordered_set<int> st;
        for(int i=0; i<n; i++){
            if(nums[i]!=1)continue;
            int t= i+k >= n ? n-1 :i+k;
            for(int j=i+1; j<=t; j++) if(nums[j]==1)return false;
        }
        return true;
    }
};