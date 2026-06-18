class Solution {
public:
    int findKOr(vector<int>& nums, int k) {
        int ans =0;
        for(int i=0; i<32; i++){
            int temp =0;
            for(int a:nums) if(a&(1<<i))temp++;
            if(temp>=k) ans+=pow(2,i);
        }
        return ans;
    }
};