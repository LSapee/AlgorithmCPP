class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        int n =nums.size();
        bool z = 1;
        int Xor = 0;
        for(int i :nums){
            Xor ^=i;
            if(i>0)z = false;
        }
        if(Xor>0)return n;
        return z ?0 :n-1;
    }
};