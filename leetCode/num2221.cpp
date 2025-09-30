class Solution {
public:
    int triangularSum(vector<int>& nums) {
        int n =nums.size();
        vector<vector<int>> arr;
        arr.push_back(nums);
        for(int i=0; i<n; i++){
            vector<int> temp;
            for(int j=0; j<arr[i].size()-1; j++){
                int k = (arr[i][j]+arr[i][j+1])%10;
                temp.push_back(k);
            }
            arr.push_back(temp);
        }
        return arr[n-1][0];
    }
};