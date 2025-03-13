class Solution {
public:
    int minZeroArray(vector<int>& nums, vector<vector<int>>& queries) {
        int n =nums.size(),sum =0,k =0;
        vector<int> arr(n+1);
        for(int i=0; i<n; i++){
            while(sum+arr[i]<nums[i]){
                k++;
                if(k>queries.size())return -1;
                int l = queries[k-1][0];
                int r = queries[k-1][1];
                int v = queries[k-1][2];
                if(r>=i){
                    arr[max(l,i)]+=v;
                    arr[r+1]-=v;
                }
            }
            sum+= arr[i];
        }
        return k;

    }
};