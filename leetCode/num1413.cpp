class Solution {
public:
    int minStartValue(vector<int>& nums) {
        for(int i=1; i<=10001; i++){
            bool ok =true;
            int k =i;
            for(int j=0; j<nums.size(); j++){
                k +=nums[j];
                if(k<1){
                    ok = false;
                    break;
                }
            }
            if(ok)return i;
        }
        return 0;
    }
};