class Solution {
public:
    string makeTwo(int num){
        string s = "";
        while(num>0){
            s= to_string(num%2)+s;
            num/=2;
        }
        for(int i=0; i<s.size(); i++){
            if(s[i]=='0')s[i]='1';
            else s[i]='0';
        }
        return s;
    }
    int makeNum(string s){
        int n = s.size()-1;
        int sum = 0;
        for(int i=0; i<n; i++) sum += (s[i]-'0')*pow(2,n-i);
        if(s[n]=='1')sum++;
        return sum;
    }
    int findComplement(int num) {
        string s = makeTwo(num);
        return makeNum(s);
    }
};
