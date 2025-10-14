class Solution {
public:
    string largestOddNumber(string num) {
        int ed = num.size()-1;
        while(ed>=0){
            if((num[ed]-'0')%2!=0)return num.substr(0,ed+1);
            ed--;
        }
        return "";
    }
};