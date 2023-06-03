class Solution {
public:
    int arr[26];
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size())return false;
        bool ans =true;
        for(int i=0; i<s.size(); i++){
            arr[s[i]-'a']++;
            arr[t[i]-'a']--;
        }
        for(int i=0; i<26; i++) {
            if(arr[i]!=0) {
                ans =false; break;
            }
        }
        return ans;
    }
};