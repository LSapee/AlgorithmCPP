class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int n = arr.size();
        int ans = 0;
        for(int i=0; i<n; i++){
            int temp = 0;
            for(int j=i; j<n; j++){
                temp+= arr[j];
                ans+=(j-i+1)%2 == 1? temp : 0;
            }
        }
        return ans;
    }
};