class Solution {
public:
    int maxAdjacentDistance(vector<int>& nums) {
        int n =nums.size();
        int k =-1000;
        for(int i=0; i<=n; i++){
            k =max(k,max(nums[(i+1)%n],nums[i%n])-min(nums[(i+1)%n],nums[i%n]));
        }
        return k;
    }
};