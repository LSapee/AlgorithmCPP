class Solution {
public:
    int missingNumber(vector<int>& arr) {
        int n = arr.size();
        int plusNum = (arr[n-1]-arr[0])/n;
        int ans = arr[0];
        for(int &num : arr){
            if(num != ans)return ans;
            ans+= plusNum;
        }
        return ans;
    }
};