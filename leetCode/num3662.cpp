class Solution {
public:
    string filterCharacters(string s, int k) {
        int n =s.size();
        int arr[26];
        for(char a: s) arr[a-'a']++;
        string ans = "";
        for(char a: s) if(arr[a-'a']<k)ans+=a;
        return ans;
    }
};