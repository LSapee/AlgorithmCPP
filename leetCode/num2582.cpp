class Solution {
public:
    int passThePillow(int n, int time) {
        int ans =1;
        bool ok =false;
        while(time--){
            if(!ok)ans++;
            else ans--;
            if(ans==n)ok=true;
            else if(ans==1) ok= false;
        }
        return ans;
    }
};