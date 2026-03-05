class Solution {
public:
    int minOperations(string s) {
        int n = s.size();
        int a = 0;
        int b = 0;
        for(int i=0; i<n; i++){
            if(s[i]== '0'){
                if(i%2==0)a++;
                else b++;
            }
            if(s[i]=='1'){
                if(i%2!=0)a++;
                else b++;
            }
        }
        return min(a,b);
    }
};