class Solution {
public:
    string smallestPalindrome(string s) {
        int arr[26];
        int n =s.size();
        for(int i=0; i<n; i++)arr[s[i]-'a']++;
        string ans = "";
        char temp = '0';
        for(int i=0; i<26; i++){
            int k = arr[i]/2;
            if(arr[i]%2==1)temp = i+'a';
            while(k--) ans+=(i+'a');
        }
        string ed = ans;
        if(temp!='0')ans+=temp;
        reverse(ed.begin(),ed.end());
        return ans+ed;
    }
};