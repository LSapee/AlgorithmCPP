class Solution {
public:
    bool checkZeroOnes(string s) {
        int n =s.size();
        int cnt1 = 0;
        int cnt2 = 0;
        int temp1 = 0;
        int temp2 = 0;
        for(int i=0; i<n; i++){
            if(s[i]=='0'){
                if(temp2 !=0){
                    cnt2 = max(cnt2,temp2);
                    temp2 =0;
                }
                temp1++;
            }else{
                if(temp1 != 0){
                    cnt1 = max(cnt1,temp1);
                    temp1 = 0;
                }
                temp2++;
            }
        }
        cnt1 = max(cnt1,temp1);
        cnt2 = max(cnt2,temp2);
        return cnt2>cnt1;
    }
};