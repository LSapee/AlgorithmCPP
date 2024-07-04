class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        for(int i=0; i<nums.size(); i++){
            int st = i+1;
            if(nums[i]%2!=0){
                while(st<nums.size()){
                    if(nums[st]%2!=0) st++;
                    else {
                        swap(nums[i],nums[st]);
                        break;
                    }
                }
            }
            if(st>=nums.size())break;
        }
        return nums;
    }
};