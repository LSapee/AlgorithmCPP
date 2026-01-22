class Solution {
public:
    int n;
    bool makeNew(vector<int>& nums){
        int st = 0;
        int index = -1;
        int temp = 99999;
        while(st<n-1){
            if(nums[st]+nums[st+1]<temp){
                temp= nums[st]+nums[st+1];
                index= st;
            }
            st++;
        }
        if(index!=-1)nums[index] +=nums[index+1];
        for(int i =index+1; i<n-1; i++)nums[i] = nums[i+1];
        nums.pop_back();
        n = nums.size();
        for(int i=1; i<n; i++)if(nums[i]<nums[i-1])return true;
        return false;
    }

    int minimumPairRemoval(vector<int>& nums) {
        n = nums.size();
        int cnt =0;
        bool check = false;
        for(int i=1; i<n; i++){
            if(nums[i]>=nums[i-1])continue;
            else check =true;
        }
        while(check){
            check = makeNew(nums);
            cnt++;
        }
        return cnt;
    }
};