class Solution {
public:
    int bitwiseComplement(int n) {
        if(n==0) return 1;
        string s = "";
        int ans =0;
        while(n>0){
            s = to_string(n%2)+s;
            n/=2;
        }
        int Size = s.size();
        for(int i=0; i<Size; i++) s[i] = s[i]=='0' ? '1':'0';
        unsigned int k =1;
        Size--;
        while(Size >=0){
            if(s[Size--]=='1')ans+=k;
            k*=2;
        }
        return ans;
    }
};