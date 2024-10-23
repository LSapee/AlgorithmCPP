class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        if(nums.size()==1)return false;
        int n =nums.size();
        for(int i=0; i<nums.size(); i++){
            int end = min((i+k)+1,n);
            for(int j=i+1; j<end; j++){
                if(nums[i]==nums[j])return true;
            }
        }
        return false;
    }
};