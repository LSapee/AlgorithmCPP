class Solution {
public:
    string ans;
    // s문자열이 기존의 문자열보다 긴 Palindrome인지 확인
    bool check(string s){
        for(int i=0,j=s.size()-1; i<=s.size()/2; i++,j--){
            if(s[i]!=s[j])return 0;
        }
        ans =s;
        return 1;
    }

    string longestPalindrome(string s) {
        ans = s.substr(0,1);
        int n = ans.size();
        for(int i=0; i<s.size(); i++){
            bool ok = false;
            for(int j=s.size()-1; j>i; j--){
                if(s[i]!=s[j])continue;
                if(n>j+1-i)break;
                ok = check(s.substr(i,j-i+1));
                if(ok){
                    n = j-i+1;
                    break;
                }
            }
            if(n>s.size()-i)return ans;
        }
        return ans;
    }
};