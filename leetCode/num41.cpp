class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n =nums.size();
        sort(nums.begin(),nums.end());
        int target = 1;
        for(int a:nums){
            if(a<=0)continue;
            if(a>target)return target;
            else {
                if(a<target)continue;
                target++;
            }
        }
        return target;
    }
};