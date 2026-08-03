class Solution {
public:
    int maximumPopulation(vector<vector<int>>& logs) {
        vector<int> arr(102,0);
        int ans = 0;
        int mx = 0;
        int n = logs.size();
        for(int i=0; i<n; i++){
            int st = logs[i][0];
            int ed = logs[i][1];
            while(st<ed){
                arr[st-1950]++;
                st++;
            }
        }
        for(int i=0; i<102; i++){
            if(arr[i]>mx){
                ans = i+1950;
                mx = arr[i];
            }
        }
        return ans;
    }
};