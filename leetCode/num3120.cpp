class Solution {
public:
    int numberOfSpecialChars(string word) {
        vector<int> lower(26,0);
        vector<int> upper(26,0);
        for(char a: word){
            if(a>='a')lower[a-'a']++;
            else upper[a-'A']++;
        }
        int ans =0;
        for(int i=0; i<26; i++)if(lower[i] >0 && upper[i]>0)ans++;
        return ans;
    }
};