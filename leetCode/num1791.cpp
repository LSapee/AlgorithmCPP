class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        vector<int> arr;
        int n = edges.size();
        arr.resize(n+2,0);
        for(int i=0; i<n; i++){
            arr[edges[i][0]]++;
            arr[edges[i][1]]++;
        }
        int ans = 0;
        int k =0;
        for(int i=1; i<arr.size(); i++){
            if(arr[i]>k){
                k=arr[i];
                ans = i;
            }
        }
        return ans;
    }
};