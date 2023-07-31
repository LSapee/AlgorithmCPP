class Solution {
public:
    int singleNumber(vector<int>& nums) {
        vector<int> arr;
        map<int,int> m;
        for(int i=0; i<nums.size(); i++){
            m[nums[i]]++;
            if(m[nums[i]]==1) arr.push_back(nums[i]);
        }
        for(int i=0; i<arr.size(); i++){
            if(m[arr[i]]==1) return arr[i];
        }
        return 0;
    }
};