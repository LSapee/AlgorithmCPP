class Solution {
public:
    int snum[26];
    int tnum[26];
    char findTheDifference(string s, string t) {
        char ans;
        for(int i=0; i<s.size(); i++){
            snum[s[i]-'a']++;
            tnum[t[i]-'a']++;
        }
        tnum[t[s.size()]-'a']++;
        for(int i=0; i<26; i++)if(snum[i]!=tnum[i]) ans='a'+i;
        return ans;
    }
};