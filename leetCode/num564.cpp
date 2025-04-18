class Solution {
#define ll long long
public:
    ll convert(ll num){
        string s =to_string(num);
        int n = s.length();
        int l = (n-1)/2,r=n/2;
        while(l>=0)s[r++]=s[l--];
        return stoll(s);
    }

    ll nxtPalindrome(ll num){
        long long left = 0, right = num;
        long long ans = INT_MIN;
        while (left <= right) {
            long long mid = (right - left) / 2 + left;
            long long palin = convert(mid);
            if (palin < num) {
                ans = palin;
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }
        return ans;
    }
    ll prevPalindrome(ll num){
        long long left = num, right = 1e18;
        long long ans = INT_MIN;
        while (left <= right) {
            long long mid = (right - left) / 2 + left;
            long long palin = convert(mid);
            if (palin > num) {
                ans = palin;
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }
        return ans;
    }

    string nearestPalindromic(string n) {
        int maxLen = n.size();
        ll num = stoll(n);
        ll a = nxtPalindrome(num);
        ll b = prevPalindrome(num);
        if (abs(a - num) <= abs(b - num)) return to_string(a);
        return to_string(b);
    }

};