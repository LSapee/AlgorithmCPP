class Solution {
public:
    int numberOfChild(int n, int k) {
        int st =0;
        bool ok =true;
        while(k>0){
            k--;
            if(ok){
                st++;
                if(st==n-1){
                    ok=false;
                }
            }else{
                st--;
                if(st==0){
                    ok =true;
                }
            }
        }
        return st;
    }
};