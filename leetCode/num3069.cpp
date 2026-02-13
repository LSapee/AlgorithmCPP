class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
        int n =nums.size();
        vector<int> A;
        vector<int> B;
        A.push_back(nums[0]);
        B.push_back(nums[1]);
        for(int i=2; i<n; i++){
            int Al =A.size();
            int Bl = B.size();
            if(A[Al-1] > B[Bl-1])A.push_back(nums[i]);
            else B.push_back(nums[i]);
        }
        for(auto a:B)A.push_back(a);
        return A;
    }
};