class Solution {
public:
    string reverseStr(string s, int k) {
        int n = s.size();
        for(int i=0; i<n; i+=(k*2)){
            int st = i,ed=i+k-1;
            if(ed>=n)ed=n-1;
            while(st<ed){
                swap(s[st++],s[ed--]);
            }
        }
        return s;
    }
};