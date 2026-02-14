class Solution {
public:
    bool isThree(int n) {
        int cnt =0;
        for(int i=2; i<n; i++)if(n%i==0)cnt++;
        if(cnt>=2||cnt==0)return false;
        return true;
    }
};