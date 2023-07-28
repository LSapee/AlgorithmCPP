class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        vector<int> ans(20001,0);
        for(int i=0; i<arr.size(); i++){
            int k = arr[i]+1000;
            ans[k]++;
        }
        sort(ans.begin(),ans.end());
        for(int i=0; i<ans.size()-1; i++){
            if(ans[i]!=0 && ans[i]==ans[i+1])return false;
        }
        return true;
    }
};