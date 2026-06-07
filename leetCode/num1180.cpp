class Solution {
public:
    int countLetters(string s) {
        int n= s.size();
        char target =s[0];
        int cnt =1;
        int ans =0;
        for(int i=1; i<n; i++){
            if(s[i]!=target){
                ans += (cnt*cnt+cnt)/2;
                cnt = 1;
                target = s[i];
            }else{
                cnt++;
            }
        }
        ans += (cnt*cnt+cnt)/2;
        return ans;
    }
};