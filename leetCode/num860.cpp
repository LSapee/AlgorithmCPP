class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        ios::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        int f =0;
        int ten =0;
        for(int i=0; i<bills.size(); i++){
            if(bills[i]==5) f++;
            else if(bills[i]==10){
                if(f==0)return false;
                f--;
                ten++;
            }else if(bills[i]==20){
                if(f==0)return false;
                else {
                    if(ten==0){
                        if(f<3)return false;
                        f-=3;
                    }else{
                        f--;
                        ten--;
                    }
                }
            }
        }
        return true;
    }
};