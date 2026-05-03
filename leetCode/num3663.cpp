class Solution {
public:
    int getLeastFrequentDigit(int n) {
        unordered_map<int,int> mp;
        int ans = 10;
        int t= INT_MAX;
        while(n>0){
            mp[n%10]++;
            n/=10;
        }
        for(auto a: mp) {
            if(a.second < t) {
                t = a.second;
                ans = a.first;
            }else if(a.second == t){
                ans = min(a.first, ans);
            }
        }
        return ans;
    }
};