class Solution {
public:
    vector<int> grayCode(int n) {
        vector<int> ans(1,0);
        for(int i=1; i<=n; i++){
            int Size = ans.size();
            int mask = 1 <<(i-1);
            for(int j=Size-1; j>=0; j--)ans.push_back(mask+ans[j]);
        }
        return ans;
    }
};