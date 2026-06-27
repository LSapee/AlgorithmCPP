class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> P;
        vector<int> T;
        for(int num: nums){
            if(num>0)P.push_back(num);
            else T.push_back(num);
        }
        int N = nums.size()/2;
        vector<int> ans;
        for(int i=0; i<N; i++){
            ans.push_back(P[i]);
            ans.push_back(T[i]);
        }
        return ans;
    }
};