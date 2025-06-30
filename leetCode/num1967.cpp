class Solution {
public:
    int numOfStrings(vector<string>& patterns, string word) {
        int n =patterns.size();
        int ans = 0;
        for(int i=0; i<n; i++){
            string s = patterns[i];
            if(word.find(s)!=string::npos)ans++;
        }
        return ans;
    }
};