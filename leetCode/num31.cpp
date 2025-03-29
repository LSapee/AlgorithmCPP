class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int size = nums.size();
        int n = nums.size()-2;
        while(n>=0 && nums[n+1]<=nums[n]){
            n--;
        }
        if(n>=0){
            int nxt = nums.size()-1;
            while(nums[nxt]<=nums[n])nxt--;
            swap(nums[n],nums[nxt]);
        }
        reverse(nums.begin()+n+1,nums.end());
    }
};