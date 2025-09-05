class Solution {
public:
    void start(vector<int>& nums){
        int n =nums.size();
        vector<int> temp;
        bool mm = false;
        for(int i=0; i<n; i=i+2){
            if(!mm){
                temp.push_back(min(nums[i],nums[i+1]));
                mm=true;
            }else{
                temp.push_back(max(nums[i],nums[i+1]));
                mm=false;
            }
        }
        nums =temp;
    }
    int minMaxGame(vector<int>& nums) {
        while(nums.size()>1){
            start(nums);
        }
        return nums[0];
    }
};