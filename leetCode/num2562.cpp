class Solution {
public:
    long long findTheArrayConcVal(vector<int>& nums) {
        long long ans =0;
        int st =0;
        int ed =nums.size()-1;
        while(st<ed){
            ans+=stoi(to_string(nums[st])+to_string(nums[ed]));
            st++;
            ed--;
        }
        if(st==ed) ans+=nums[st];
        return ans;
    }
};