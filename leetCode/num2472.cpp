class Solution {
public:
    // 최소 길이 k
    // 겹치지 않는 회문의 갯수.
    bool isPalindrome(string &s,int st,int ed){
        while(st<ed) if(s[st++]!=s[ed--])return false;
        return true;
    }
    int maxPalindromes(string s, int k) {
        if(k==1)return s.size();
        int ans =0;
        int cnt =0;
        int n = s.size();
        for(int i=0; i<n;){
            if(i+k <= n && isPalindrome(s,i,i+k-1)){
                ans++;
                i+=k;
                continue;
            }
            if(i+k+1 <= n && isPalindrome(s,i,i+k)){
                ans++;
                i += k+1;
                continue;
            }
            i++;
        }
        return ans;
    }
};