class Solution {
public:
    string convertToBase7(int num) {
        string s ="";
        if(num<0){
            num *=-1;
            s+="-";
        }
        string temp ="";
        while(num>=7){
            temp= to_string(num%7)+temp;
            num/=7;
        }
        s += to_string(num)+temp;
        return s;
    }
};