class Solution {
public:
    int cnt[26];
    bool areOccurrencesEqual(string s) {
        int n =s.size();
        for(int i=0; i<n; i++)cnt[s[i]-'a']++;
        int a = cnt[s[0]-'a'];
        for(int i=0; i<26; i++){
            if(cnt[i]==0)continue;
            if(cnt[i]!=a)return false;
        }
        return true;
    }
};