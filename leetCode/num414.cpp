class Solution {
public:
    int thirdMax(vector<int>& nums) {
        sort(nums.rbegin(),nums.rend());
        vector<int> arr;
        arr.push_back(nums[0]);
        int st = 0;
        for(int i=1; i<nums.size(); i++){
            if(nums[i]!=arr[st]){
                arr.push_back(nums[i]);
                st++;
            }
            if(arr.size()==3) return arr[2];
        }
        return nums[0];
    }
};