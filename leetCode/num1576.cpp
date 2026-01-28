class Solution {
public:
    string modifyString(string s) {
        int n = s.size();
        if(n==1 && s[0]=='?')return "a";
        for(int i=0; i<n; i++){
            char a = 'a';
            if(s[i]=='?'){
                if(i+1<n && i-1>=0){
                    while(s[i+1]==a || s[i-1]==a)a++;
                    s[i]=a;
                }else if(i==n-1){
                    while(s[i-1]==a)a++;
                    s[i]=a;
                }else if(i==0){
                    while(s[i+1]==a)a++;
                    s[i]=a;
                }
            }
        }
        return s;
    }
};