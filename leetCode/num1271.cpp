class Solution {
public:
    string toHexspeak(string num) {
        long long k = stoll(num);
        string s = "";
        while(k>0){
            int temp = k%16;
            if(temp==0)s = "O"+s;
            else if(temp == 1) s ="I"+s;
            else if(temp == 10) s= "A"+s;
            else if(temp == 11) s= "B"+s;
            else if(temp == 12) s= "C"+s;
            else if(temp == 13) s= "D"+s;
            else if(temp == 14) s= "E"+s;
            else if(temp == 15) s= "F"+s;
            else return "ERROR";
            k/=16;
        }
        return s;
    }
};