class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
        vector<vector<int>> bitArr(16,vector<int>(0));
        vector<int> ans;
        sort(arr.begin(),arr.end());
        int n = arr.size();
        for(int i=0; i<n; i++){
            int cur = arr[i];
            int cnt =0;
            while(cur>0){
                if(cur%2==1)cnt++;
                cur/=2;
            }
            bitArr[cnt].push_back(arr[i]);
        }
        for(int i=0; i<16; i++){
            int m =bitArr[i].size();
            for(int j=0; j<m; j++){
                ans.push_back(bitArr[i][j]);
            }
        }

        return ans;
    }
};