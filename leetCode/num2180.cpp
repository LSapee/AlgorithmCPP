class Solution {
public:
    int countEven(int num) {
        int ans =0;
        for(int i=1; i<=num; i++){
            string s = to_string(i);
            int a = 0;
            for(int j=0; j<s.size(); j++) a+= (s[j]-'0');
            if(a%2==0)ans++;
        }
        return ans;
    }
};