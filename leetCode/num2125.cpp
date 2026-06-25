class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int ans =0;
        int temp =0;
        for(string s: bank){
            int cnt=0;
            for(char a: s){
                if(a=='1')cnt++;
            }
            if(cnt!=0){
                ans+=(temp*cnt);
                temp =cnt;
            }
        }
        return ans;
    }
};