class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        int n =s.size();
        string ans ="";
        vector<char> arr(n);
        for(int i=0; i<n; i++) arr[indices[i]] = s[i];
        for(int i=0; i<n; i++) ans+=arr[i];
        return ans;
    }
};