class Solution {
public:
    int minimumDeletions(string s) {
        int n = s.size();
        vector<int> A(n,0);
        vector<int> B(n,0);
        int acnt =0;
        int bcnt =0;
        for(int i=0; i<n; i++){
            B[i] = bcnt;
            if(s[i]=='b')bcnt++;
        }
        for(int i=n-1; i>=0; i--){
            A[i] = acnt;
            if(s[i]=='a')acnt++;
        }
        int ans = INT_MAX;
        for(int i=0; i<n; i++){
            ans = min(ans,A[i]+B[i]);
        }
        return ans;
    }
};