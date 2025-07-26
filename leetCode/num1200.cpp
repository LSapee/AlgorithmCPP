class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        vector<vector<int>> ans;
        int n = arr.size();
        sort(arr.begin(),arr.end());
        int k = 999999;
        for(int i=1; i<n; i++) k = arr[i]-arr[i-1] <k ? arr[i]-arr[i-1] : k;
        for(int i=1; i<n; i++){
            vector<int> temp;
            if(arr[i]-arr[i-1] == k ){
                temp.push_back(arr[i-1]);
                temp.push_back(arr[i]);
                ans.push_back(temp);
            }
        }
        return ans;
    }
};