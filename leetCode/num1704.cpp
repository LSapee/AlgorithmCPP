class Solution {
public:
    bool check(char a){
        if(a == 'a') return true;
        if(a == 'A') return true;
        if(a == 'e') return true;
        if(a == 'E') return true;
        if(a == 'i') return true;
        if(a == 'I') return true;
        if(a == 'o') return true;
        if(a == 'O') return true;
        if(a == 'u') return true;
        if(a == 'U') return true;
        return false;
    }
    bool halvesAreAlike(string s) {
        int f =0;
        int b = 0;
        int n= s.size();
        int mid = n/2;
        int st=0;
        while(st<mid){
            if(check(s[st]))f++;
            if(check(s[st+mid]))b++;
            st++;
        }
        return f==b;
    }
};