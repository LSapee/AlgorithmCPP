class Solution {
public:
    bool canAliceWin(int n) {
        if(n<10)return 0;
        int A =10;
        bool ok = 1;
        while(n>=0){
            n-=A;
            A--;
            ok = !ok;
        }
        return ok;
    }
};