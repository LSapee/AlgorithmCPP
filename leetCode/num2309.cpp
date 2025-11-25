class Solution {
public:
    string greatestLetter(string s) {
        vector<int> arr(26);
        int n = s.size();
        for(int i=0; i<n; i++){
            if(s[i]>='A' &&s[i]<='Z'){
                if(arr[s[i]-'A']%10 <1) arr[s[i]-'A']++;
            }
            if(s[i]>='a' &&s[i]<='z'){
                if(arr[s[i]-'a']/10 <1) arr[s[i]-'a']+=10;
            }
        }
        string ans = "";
        for(int i=0; i<26; i++)if(arr[i]==11)ans = ans[0] > 'A'+i ? ans[0] : 'A'+i;
        return ans;
    }
};