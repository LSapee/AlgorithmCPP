class Solution {
public:
    int sumK(int a){
        int temp =0;
        while(a>0){
            temp+=a%10;
            a/=10;
        }
        return temp;
    }
    int getLucky(string s, int k) {
        int sum =0;
        string ss = "";
        for(int i=0; i<s.size(); i++)ss+=to_string(s[i]+1-'a');
        for(int i=0; i<ss.size(); i++)sum+=ss[i]-'0';
        k--;
        while(k--){
            sum = sumK(sum);
        }
        return sum;
    }
};