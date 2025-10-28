class Solution {
public:
    long long removeZeros(long long n) {
        string num = to_string(n);
        long long ans =0;
        for(int i=0; i<num.size(); i++){
            if(num[i] >='1' && num[i]<='9'){
                ans*=10;
                ans+= num[i]-'0';
            }
        }
        return ans;
    }
};