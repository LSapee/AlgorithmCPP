class Solution {
public:
    string concatHex36(int n) {
        string h = "";
        string h3 = "";
        int k = n*n;
        int kk = n*n*n;
        while(k>0){
            int temp =k%16;
            if(temp>9){
                temp -=10;
                char T = ('A'+temp);
                h = T+h;
            }else{
                h=to_string(temp) +h;
            }
            k/=16;
        }
        while(kk>0){
            int temp =kk%36;
            if(temp>9){
                temp -=10;
                char T = ('A'+temp);
                h3 = T+h3;
            }else{
                h3=to_string(temp) +h3;
            }
            kk/=36;
        }
        return h+h3;
    }
};