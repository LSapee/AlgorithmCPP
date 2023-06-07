class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int k = digits.size();
        if(digits[k-1]!=9) {
            digits[k-1]++;
            return digits;
        }
        int one = 1;
        vector<int> ans;
        while(k--){
            digits[k]+=one;
            if(digits[k]==10){
                one =1;
                ans.push_back(0);
            }else{
                ans.push_back(digits[k]);
                one =0;
            }
        }
        if(one ==1) ans.push_back(1);
        reverse(ans.begin(),ans.end());
        return ans;
    }
};