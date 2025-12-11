class Solution {
public:
    bool isCovered(vector<vector<int>>& ranges, int left, int right) {
        int n = ranges.size();
        unordered_map<int,int> mp;
        for(int i=0; i<n; i++){
            int l = ranges[i][0];
            int r = ranges[i][1];
            while(l<=r){
                mp[l]++;
                l++;
            }
        }
        for(int i=left; i<=right; i++){
            if(!mp.count(i))return false;
        }
        return true;
    }
};