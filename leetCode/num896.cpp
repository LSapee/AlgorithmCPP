class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        ios::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        bool pm = true;
        bool ans = true;
        if(nums.size()>=2 && nums[nums.size()-1]-nums[0]<0) pm=false;
        if(!pm){
            for(int i=0; i<nums.size()-1; i++){
                if(nums[i]<nums[i+1]) {
                    ans=false;
                    break;
                }
            }
        }else{
            for(int i=0; i<nums.size()-1; i++){
                if(nums[i]>nums[i+1]) {
                    ans=false;
                    break;
                }
            }
        }
        return ans;
    }
};