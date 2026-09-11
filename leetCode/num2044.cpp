class Solution {
public:
    int n;
    int maxV;
    int ans;
    void back(int index,int val, vector<int>& nums){
        if(index == n){
            if(val ==maxV)ans++;
            return;
        }
        back(index+1, val|nums[index], nums);
        back(index+1, val, nums);
    }
    int countMaxOrSubsets(vector<int>& nums) {
        n =nums.size();
        maxV =0; // 최대 비트
        ans = 0;
        for(int num:nums)maxV |=num;
        back(0,0,nums);
        return ans;
    }
};


