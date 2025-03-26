class Solution {
public:
    vector<int> arr;
    int sum =0;
    bool isTrue(vector<vector<int>>& grid, int x){
        int k = grid[0][0]%x;
        for(int i=0; i<grid.size(); i++){
            for(int j=0; j<grid[i].size(); j++){
                if(grid[i][j]%x != k)return false;
                arr.push_back(grid[i][j]);
                sum+=grid[i][j];
            }
        }
        return true;
    }

    int minOperations(vector<vector<int>>& grid, int x) {
        if(!isTrue(grid,x))return -1;
        int n =grid.size();
        int m = grid[0].size();
        sort(arr.begin(),arr.end());
        int target = arr[arr.size()/2];
        int ans =0;
        for(int i=0; i<arr.size(); i++)ans+= abs(arr[i]-target)/x;
        return ans;
    }
};