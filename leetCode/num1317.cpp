class Solution {
public:
    bool isZero(int k){
        while(k>=10){
            if(k%10==0)return true;
            k/=10;
        }
        return false;
    }

    vector<int> getNoZeroIntegers(int n) {
        vector<int> ans;
        int k = n-1;
        while(k>=1){
            if(isZero(k) || isZero(n-k))k--;
            else break;
        }
        ans.push_back(n-k);
        ans.push_back(k);
        return ans;
    }
};