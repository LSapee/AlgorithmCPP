class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int n = arr.size();
        int st = 0;
        while(st<n){
            int m = st+(n-st)/2;
            int target = arr[m]-(m+1);
            if(target<k){
                st = m+1;
            }else{
                n = m;
            }
        }
        return st+k;
    }
};