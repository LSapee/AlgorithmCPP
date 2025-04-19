class Solution {
public:
    int numberOfSubstrings(string s) {
        int n = s.size();
        int ans =0;
        vector<int> arr = {-1,-1,-1};
        for(int i=0; i<n; i++){
            arr[s[i]-'a']= i;
            ans+=1+min({arr[0],arr[1],arr[2]});
        }
        return ans;
    }
};